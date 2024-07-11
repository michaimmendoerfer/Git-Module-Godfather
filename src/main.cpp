#define NODE_NAME "Monitor-1"
#define NODE_TYPE MONITOR_BIG
#define DEBUG_LEVEL 3
//#define KILL_NVS 1

const char *_Version = "V 3.61";
const char *_Name = "Monitor 1";
const char _Protokoll_Version[] = "1.01";

#pragma region Includes
#include <Arduino.h>
#include "Jeepify.h"
#include "main.h"
#include <esp_now.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include "pref_manager.h"
#include "PeerClass.h"
#include "LinkedList.h"
#include <lvgl.h>
#include "Ui\ui.h"
#include "Ui\ui_events.h" 
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <esp32_smartdisplay.h>
#include <nvs_flash.h>
#include <Wire.h>
#include <Spi.h>


#define u8 unsigned char
#pragma endregion Includes

#pragma region I2C_BUS
#define I2C_FREQ 400000
#define ADS_ADDRESS  0x48
#define PORT_ADDRESS 0x20

#ifdef ADS_USED
    #include <Adafruit_ADS1X15.h>
    Adafruit_ADS1115 ADSBoard;
#endif

#ifdef PORT_USED
    #include "PCF8575.h"
    PCF8575 IOBoard(PORT_ADDRESS, SDA_PIN, SCL_PIN);
#endif
#pragma endregion I2C_BUS

#define PAIRING_BUTTON 9
#define LED_PIN         8
#define LED_OFF         HIGH
#define LED_ON          LOW

#pragma region Globals

int PeerCount;
Preferences preferences;
uint8_t broadcastAddressAll[6] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};

PeerClass Self;

String jsondataBuf;

uint32_t TSPing          = 0;

volatile uint32_t TSMsgRcv  = 0;
volatile uint32_t TSMsgSnd  = 0;
volatile uint32_t TSMsgPDC  = 0;
volatile uint32_t TSMsgBat  = 0;
volatile uint32_t TSMsgVolt = 0;
volatile uint32_t TSMsgEich = 0;
volatile uint32_t TSMsgPair = 0;
volatile uint32_t TSPair    = 0;

lv_timer_t *WDButtonVars;

int ActiveMultiScreen;
bool WebServerActive = true;

#pragma endregion Globals
#pragma region WebServer
AsyncWebServer server(80);
const char* ssid = "Jeepify_Monitor";
const char* password = "";

const char* PARAM_MESSAGE = "message";

PeerClass   *ActiveWebPeer = NULL;
PeriphClass *ActiveWebPeriph = NULL;

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>ESP32 Form</title>
<style>
body{ margin: 0;padding: 0;font-family: Arial, Helvetica, sans-serif;background-color: #2c257a;}
.box{ width: 70%%; padding: 40px; position: absolute; top: 50%%; left: 50%%; transform: translate(-50%%,-50%%); background-color: #191919; color: white; text-align: center; border-radius: 24px; box-shadow: 0px 1px 32px 0px rgba(0,227,197,0.59);}
h1{ text-transform: uppercase; font-weight: 500;}
input{ border: 0; display: block; background: none; margin: 20px auto; text-align: center; border: 2px solid #4834d4; padding: 14px 10px; width: 30%%; outline: none; border-radius: 24px; color: white; font-size: smaller; transition: 0.3s;}
input:focus{ width: 90%%; border-color:#22a6b3 ;}
input[type='submit']{ border: 0; display: block; background: none; margin: 20px auto; text-align: center; border: 2px solid #22a6b3; padding: 14px 10px; width: 140px; outline: none; border-radius: 24px; color: white; transition: 0.3s; cursor: pointer;}
input[type='submit']:hover{ background-color: #22a6b3;}
</style>
</head>
<body>
<form action="/get" class="box" id="values">
<h1>Settings (%PeerName%)</h1>
<div class="part">
<input name="PeerName" type="text" placeholder="%PeerName%">
</div>
<div class="part">
<input name="PeriphName" type="%TYPE%" placeholder="%PeriphName%">
</div>
<div class="part">
<input name="Nullwert" type="%TYPE%" placeholder="%Nullwert%">
</div>
<div class="part">
<input name="VperAmp" type="%TYPE%" placeholder="%VperAmp%">
</div>
<div class="part">
<input name="Vin" type="%TYPE%" placeholder="%Vin%">
<input type="submit" name="message" value="update module" />
</div>
<div class="part">
<table align=center>
  <tr>
    <td><div class="part"><input type="submit" name="message" value="prev" /></div></td>
    <td><div class="part"><input type="submit" name="message" value="module" /></div></td>
    <td><div class="part"><input type="submit" name="message" value="next" /></div></td>
  </tr>
</table>
</div>
</form>
</body></html>
)rawliteral";

void notFound(AsyncWebServerRequest *request) {
  request->send(404, "text/plain", "Not found");
}

String processor(const String& var)
{
    char Buf[10];
    
    if (var == "TYPE")        
    {
            if (ActiveWebPeriph) return "text";
                              else return "hidden";
    }
    if (var == "PeerName")    return ActiveWebPeer->GetName();
    if (var == "PeriphName")  if (ActiveWebPeriph) return ActiveWebPeriph->GetName();
    if (var == "Nullwert")    if (ActiveWebPeriph) { dtostrf(ActiveWebPeriph->GetNullwert(), 0, 3, Buf); return String(Buf); }
    if (var == "VperAmp")     if (ActiveWebPeriph) { dtostrf(ActiveWebPeriph->GetVperAmp(), 0, 3, Buf); return String(Buf); }
    if (var == "Vin")         if (ActiveWebPeriph) return String(ActiveWebPeriph->GetVin());
    
    return String();
}
bool SendWebPeriphNameChange()
{
    JsonDocument doc; String jsondata; 

    doc["from"]    = NODE_NAME;   
    doc["Order"]   = SEND_CMD_UPDATE_NAME;
    doc["NewName"] = ActiveWebPeriph->GetName();
    doc["Pos"]     = ActiveWebPeriph->GetPos();
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(ActiveWebPeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}
bool SendWebPeerNameChange()
{
    JsonDocument doc; String jsondata; 
    
    doc["from"]    = NODE_NAME;   
    doc["Order"]   = SEND_CMD_UPDATE_NAME;
    doc["NewName"] = ActiveWebPeer->GetName();
    doc["Pos"]     = 99;
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(ActiveWebPeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}
bool SendWebVinChange()
{
    JsonDocument doc; String jsondata; 
    
    doc["from"]    = NODE_NAME;   
    doc["Order"]   = SEND_CMD_UPDATE_VIN;
    doc["Value"]   = ActiveWebPeriph->GetVin();
    doc["Pos"]     = ActiveWebPeriph->GetPos();
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(ActiveWebPeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}
bool SendWebVperAmpChange()
{
    JsonDocument doc; String jsondata; 
    
    doc["from"]    = NODE_NAME;   
    doc["Order"]   = SEND_CMD_UPDATE_VPERAMP;
    doc["Value"]   = ActiveWebPeriph->GetVperAmp();
    doc["Pos"]     = ActiveWebPeriph->GetPos();
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(ActiveWebPeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}
bool SendWebNullwertChange()
{
    JsonDocument doc; String jsondata; 
    
    doc["from"]    = NODE_NAME;   
    doc["Order"]   = SEND_CMD_UPDATE_NULLWERT;
    doc["Value"]   = ActiveWebPeriph->GetNullwert();
    doc["Pos"]     = ActiveWebPeriph->GetPos();
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(ActiveWebPeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}

void InitWebServer()
{
    WiFi.softAP(ssid, password);
    WiFi.setTxPower(WIFI_POWER_8_5dBm);
    int txPower = WiFi.getTxPower();
    Serial.print("TX power: ");
    Serial.println(txPower);

    IPAddress IP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(IP);
    
    ActiveWebPeer = &Self;
    ActiveWebPeriph = NULL;
    
    server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
        request->send_P(200, "text/html", index_html, processor);
    });
    
    server.on("/get", HTTP_GET, [] (AsyncWebServerRequest *request) {
        String message;
        String WebBuffer;

        bool SaveNeeded  = false;

        if (request->hasParam(PARAM_MESSAGE)) {
            message = request->getParam(PARAM_MESSAGE)->value();
            if (message == "update module") 
            {
                if (request->hasParam("PeerName"))
                {
                  WebBuffer = request->getParam("PeerName")->value();
                  if (WebBuffer != "")
                    { 
                        if (Self.GetDebugMode()) Serial.printf("Received from web: NewPeerName = %s\n\r", WebBuffer.c_str());  
                        if (ActiveWebPeer) 
                        {   
                            SaveNeeded = true;
                            ActiveWebPeer->SetName(WebBuffer.c_str());
                            if (ActiveWebPeer != &Self) SendWebPeerNameChange();
                        }
                    }
                }
                
                if (request->hasParam("PeriphName"))
                {
                  WebBuffer = request->getParam("PeriphName")->value();
                  if (WebBuffer != "")
                    { 
                        if (Self.GetDebugMode()) Serial.printf("Received from web: NewPeriphName = %s\n\r", WebBuffer.c_str());  
                        if (ActiveWebPeriph) 
                        {
                            SaveNeeded = true;
                            ActiveWebPeriph->SetName(WebBuffer.c_str());
                            if (ActiveWebPeer != &Self) SendWebPeriphNameChange();
                        }
                    }
                }

                if (request->hasParam("Nullwert"))
                {
                  WebBuffer = request->getParam("Nullwert")->value();
                  if (WebBuffer != "")
                    { 
                        if (Self.GetDebugMode()) Serial.printf("Received from web: NewNullwert = %s\n\r", WebBuffer.c_str());  
                        if (ActiveWebPeriph) 
                        {
                            SaveNeeded = true;
                            ActiveWebPeriph->SetNullwert(atof(WebBuffer.c_str()));
                            if (ActiveWebPeer != &Self) SendWebNullwertChange();
                        }
                    }
                }
                
                if (request->hasParam("VperAmp"))
                {
                  WebBuffer = request->getParam("VperAmp")->value();
                  if (WebBuffer != "")
                    { 
                        if (Self.GetDebugMode()) Serial.printf("Received from web: NewVperAmp = %s\n\r", WebBuffer.c_str());  
                        if (ActiveWebPeriph) 
                        {
                            SaveNeeded = true;
                            ActiveWebPeriph->SetVperAmp(atof(WebBuffer.c_str()));
                            if (ActiveWebPeer != &Self) SendWebVperAmpChange();
                        }
                    }
                }
                if (request->hasParam("Vin"))
                {
                  WebBuffer = request->getParam("Vin")->value();
                  if (WebBuffer != "")
                    { 
                        if (Self.GetDebugMode()) Serial.printf("Received from web: NewVin = %s\n\r", WebBuffer.c_str());  
                        if (ActiveWebPeriph) 
                        {
                            SaveNeeded = true;
                            ActiveWebPeriph->SetVperAmp(atoi(WebBuffer.c_str()));
                            if (ActiveWebPeer != &Self) SendWebVinChange();
                        }
                    }
                }  
            }
            
            if (message == "module") 
            {
                if (Self.GetDebugMode()) Serial.println("Module aufgerufen");
                ActiveWebPeer   = &Self;
                ActiveWebPeriph = NULL;
                Serial.printf("aktueller Name = %s\n\r", ActiveWebPeer->GetName());
            }
            if (message == "prev") 
            {
                if (Self.GetDebugMode()) Serial.println("Prev aufgerufen");
                if (ActiveWebPeer == &Self) 
                {
                    PeerClass *TempP = FindFirstPeer(MODULE_ALL);
                    if (TempP) ActiveWebPeer = TempP;
                    ActiveWebPeriph = FindFirstPeriph(ActiveWebPeer, SENS_TYPE_ALL);  
                }
                else
                {
                    ActiveWebPeriph = FindPrevPeriph(NULL, ActiveWebPeriph, SENS_TYPE_ALL, true);
                    ActiveWebPeer   = FindPeerById(ActiveWebPeriph->GetPeerId());
                }

            }
            if (message == "next") 
            {
                if (Self.GetDebugMode()) Serial.println("Next aufgerufen");
                if (ActiveWebPeer == &Self) 
                {
                    PeerClass *TempP = FindFirstPeer(MODULE_ALL);
                    if (TempP) ActiveWebPeer = TempP;
                    ActiveWebPeriph = FindFirstPeriph(ActiveWebPeer, SENS_TYPE_ALL);  
                }
                else
                {
                    ActiveWebPeriph = FindNextPeriph(NULL, ActiveWebPeriph, SENS_TYPE_ALL, true);
                    ActiveWebPeer   = FindPeerById(ActiveWebPeriph->GetPeerId());
                }
            }
        } else {
            message = "No message sent";
        }
        request->send_P(200, "text/html", index_html, processor);
        
        if (SaveNeeded)
        {   
            if (ActiveWebPeer != &Self) SavePeers();
            else 
            {
                preferences.begin("JeepifyInit", false);
                preferences.putString("ModuleName", Self.GetName());
                preferences.end();
                Serial.println("Neuer Module Name gespeichert");
            }
            SaveNeeded = false;
        }
    });

  server.onNotFound(notFound);
  server.begin();
  
}
void ToggleWebServer()
{   
    WebServerActive = !WebServerActive;
    if (WebServerActive) server.begin();
    else server.end();
}
#pragma endregion WebServer

#pragma region Main
void OnDataRecv(const uint8_t * mac, const uint8_t *incomingData, int len) 
{
    PeerClass *P;

    char* buff = (char*) incomingData;   
    JsonDocument doc; 
    String jsondata = String(buff); 
    
    String BufS; char Buf[50] = {};
    bool SaveNeeded = false;
    bool NewPeer    = false;
    
    jsondataBuf = jsondata;
    PrepareJSON();
    
    DeserializationError error = deserializeJson(doc, jsondata);

    if (!error) // erfolgreich JSON
    {
        P = FindPeerByMAC(mac);
        TSMsgRcv = millis();
        int Order = (int)doc["Order"];

        if ((!P) and (Order == SEND_CMD_PAIR_ME) and (Self.GetPairMode())) // neuen Peer registrieren
        { 
            P = new PeerClass();
            PeerList.add(P);
            SaveNeeded = true;
            NewPeer    = true;
            Self.SetPairMode(false); TSPair = 0;
        }

        if (P)      // Peer bekannt
        { 
            P->SetTSLastSeen(millis());
            if (Self.GetDebugMode()) Serial.printf("bekannter Node: %s - LastSeen at %d\n\r", P->GetName(), P->GetTSLastSeen());
            
            if (Order == SEND_CMD_PAIR_ME) 
            // check or init names
            { 
                int    Status       = doc["Status"];
                String PeerName     = doc["Node"];
                String PeerVersion  = doc["Version"];

                if ((strcmp(PeerName.c_str(), P->GetName()) != 0) or (strcmp(PeerVersion.c_str(), P->GetVersion()) != 0))
                {
                    SaveNeeded = true;
                    P->Setup(PeerName.c_str(), (int)doc["Type"], PeerVersion.c_str(), mac, 
                        (bool) bitRead(Status, 1), (bool) bitRead(Status, 0), (bool) bitRead(Status, 2), (bool) bitRead(Status, 3));
                } 
                
                // Message-Bsp: "Node":"ESP32-1"; "T0":"1"; "N0":"Switch1"
                for (int Si=0; Si<MAX_PERIPHERALS; Si++) {
                    snprintf(Buf, sizeof(Buf), "T%d", Si);                          // Check for T0 (Type of Periph 0)
                    if (Self.GetDebugMode()) Serial.printf("Check Pairing for: %s", Buf);
                    
                    if (doc.containsKey(Buf)) 
                    {
                        if (Self.GetDebugMode()) Serial.printf("Pairing found: %s", Buf);       
                        int  Type = doc[Buf];                                       // Set Periph[0].Type

                        snprintf(Buf, sizeof(Buf), "N%d", Si);                      // get N0 (Name of Periph 0)
                        String PName = doc[Buf];

                        if ((strcmp(PName.c_str(), P->GetPeriphName(Si)) != 0) or (Type != P->GetPeriphType(Si)))
                        {
                            P->PeriphSetup(Si, PName.c_str(), Type, false, false, 0, 0, 0, P->GetId());
                            if (NewPeer) PeriphList.add(P->GetPeriphPtr(Si));
                            SaveNeeded = true;
                            if (Self.GetDebugMode()) Serial.printf("%s->Periph[%d].Name is now: %s\n", P->GetName(), Si, P->GetPeriphName(Si));
                        }

                        snprintf(Buf, sizeof(Buf), "B%d", Si);                      // get B0 (Brother of Periph 0)
                        if (doc.containsKey(Buf)) 
                        {
                            int Brother = (int) doc[Buf];

                            if (Brother !=  P->GetPeriphBrotherId(Si))
                            {
                                P->SetPeriphBrotherId(Si, Brother);
                                if (Self.GetDebugMode()) Serial.printf("%s->Periph[%d].Brother is now: %d\n", P->GetName(), Si, P->GetPeriphBrotherId(Si));
                            }
                        }
                    } 
                }
                SendPairingConfirm(P); 
            }
            /*// "Order"="UpdateName"; "Pos"="32; "NewName"="Horst"; Pos 99 is moduleName
            else if (Order == SEND_CMD_UPDATE_NAME)// vieleicht bald weg
            {
                int Pos = (int) doc["Pos"];
                String NewName = doc["NewName"];

                if (NewName != "") 
                {
                    if (Pos == 99) P->SetName(NewName.c_str());
                    else           P->SetPeriphName(Pos, NewName.c_str());
                }

                SavePeers();
            }*/
            else // Peer known - no status, no pairing so read new values
            {
                for (int i=0; i<MAX_PERIPHERALS; i++) 
                {
                    if (doc.containsKey((const char*)P->GetPeriphName(i))) {
                        float TempSensor = (float)doc[P->GetPeriphName(i)];
                        if (abs(TempSensor) < 0.1) TempSensor = 0;

                        //Serial.print(P->GetPeriphName(i)); Serial.print(" found = "); Serial.println(TempSensor);
                        
                        if (TempSensor != P->GetPeriphValue(i)) {
                            P->SetPeriphOldValue(i, P->GetPeriphValue(i));
                            P->SetPeriphValue(i, TempSensor);
                            P->SetPeriphChanged(i, true);
                        }
                        else P->SetPeriphChanged(i,false);
                    }

                    if (doc.containsKey("Status")) 
                    {
                        int Status = doc["Status"];
                        P->SetDebugMode ((bool) bitRead(Status, 0));
                        P->SetSleepMode ((bool) bitRead(Status, 1));
                        P->SetDemoMode  ((bool) bitRead(Status, 2));
                        P->SetPairMode  ((bool) bitRead(Status, 3));
                    } 
                } 
            }
        } 
        
        if (SaveNeeded)
        {
            SavePeers();
            SaveNeeded = false;
        }
        if (NewPeer)
        {
            ReportAll();
            RegisterPeers();
            NewPeer = false;
        }
    }
    else 
    {        // Error bei JSON
        Serial.print(F("deserializeJson() failed: ")); 
        Serial.println(error.f_str());
        return;
    }
}

void setup() 
{
    #ifdef ARDUINO_USB_CDC_ON_BOOT
        delay(3000);
    #endif
    
    Serial.begin(115200);
    
    #ifdef KILL_NVS
        nvs_flash_erase(); nvs_flash_init(); ESP.restart();
        while(1)
        {}
    #endif

    Self.Setup(_Name, MONITOR_BIG, _Version, broadcastAddressAll, false, true, false, false);
    
    WiFi.mode(WIFI_AP_STA);
    //ESP-Now
    /*InitWebServer();
    if (WebServerActive) 
    {
            ActiveWebPeer = PeerList.get(0);
            ActiveWebPeriph = PeriphList.get(0);
            server.begin();
    }
    //WiFi.mode(WIFI_AP);
    */
    if (esp_now_init() != ESP_OK) { Serial.println("Error initializing ESP-NOW"); return; }

    esp_now_register_send_cb(OnDataSent);
    esp_now_register_recv_cb(OnDataRecv);    

    //Get saved Peers  
    if (DEBUG_LEVEL > 0)                        // Show free entries
    {
        preferences.begin("JeepifyInit", true);
            Serial.printf("free entries in JeepifyInit now: %d\n\r", preferences.freeEntries());
        preferences.end();
        preferences.begin("JeepifyPeers", true);
            Serial.printf("free entries in JeepifyPeers now: %d\n\r", preferences.freeEntries());
        preferences.end();
    }

    preferences.begin("JeepifyInit", true);
        Self.SetDebugMode(preferences.getBool("DebugMode", true));
        Self.SetSleepMode(preferences.getBool("SleepMode", false));
        Self.SetName(preferences.getString("ModuleName", NODE_NAME).c_str());
    preferences.end();
    
    GetPeers();
    RegisterPeers();
    ReportAll();
  
    smartdisplay_init();
    smartdisplay_lcd_set_backlight(0.5);
    Serial.println("smartdisp.init fertig");

    __attribute__((unused)) auto disp = lv_disp_get_default();
    lv_disp_set_rotation(disp, LV_DISP_ROT_90);
    
    Serial.println("disp.init fertig");

    ui_init(); 

    static uint32_t user_data = 10;
    lv_timer_t *TimerPing = lv_timer_create(SendPing, PING_INTERVAL,  &user_data);

    Serial.println("Setup fertig");
}
void loop() 
{
  lv_timer_handler(); /* let the GUI do its work */
  delay(5);
}
#pragma endregion Main
#pragma region Send-Things
void SendPing(lv_timer_t * timer) {
    JsonDocument doc; String jsondata;

    PeerClass *P;
    
    doc["Node"] = NODE_NAME;   
    doc["Order"] = SEND_CMD_STAY_ALIVE;

    if (Self.GetPairMode())
    {
        doc["Pairing"] = "aktiv";
    }

    serializeJson(doc, jsondata);  
    
    for (int i=0; i<PeerList.size(); i++)
    {
        P = PeerList.get(i);
        if (P->GetType() > 0) esp_now_send(P->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  
    }
}
void SendPairingConfirm(PeerClass *P) {
  JsonDocument doc; String jsondata; 
  
  uint8_t *Broadcast = P->GetBroadcastAddress();
  
  doc["Node"]     = Self.GetName();   
  doc["Peer"]     = P->GetName();
  doc["Order"]    = SEND_CMD_YOU_ARE_PAIRED;
  doc["Type"]     = Self.GetType();
  doc["B0"]       = (uint8_t)Broadcast[0];
  doc["B1"]       = (uint8_t)Broadcast[1];
  doc["B2"]       = (uint8_t)Broadcast[2];
  doc["B3"]       = (uint8_t)Broadcast[3];
  doc["B4"]       = (uint8_t)Broadcast[4];
  doc["B5"]       = (uint8_t)Broadcast[5];

  serializeJson(doc, jsondata);  
  
  TSMsgSnd = millis();
  esp_now_send(broadcastAddressAll, (uint8_t *) jsondata.c_str(), 200); 
  if (Self.GetDebugMode())
  {
      Serial.print("Sent you are paired"); 
      Serial.println(jsondata);  
  }       
}
bool ToggleSwitch(PeerClass *P, int PerNr)
{
    JsonDocument doc; String jsondata; 
    
    doc["from"]  = NODE_NAME;   
    doc["Order"] = SEND_CMD_SWITCH_TOGGLE;
    doc["Value"] = P->GetPeriphName(PerNr);
    doc["Pos"]   = P->GetPeriphPos(PerNr);
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(P->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);

    return true;
}
bool ToggleSwitch(PeriphClass *Periph)
{
    JsonDocument doc; String jsondata; 
    
    if (Periph->GetValue() == 1) Periph->SetValue(0);
    else Periph->SetValue(1);

    Periph->SetChanged(true);

    doc["from"]  = NODE_NAME;   
    doc["Order"] = SEND_CMD_SWITCH_TOGGLE;
    doc["Value"] = Periph->GetName();
    doc["Pos"]   = Periph->GetPos();
    
    serializeJson(doc, jsondata);  
    
    TSMsgSnd = millis();
    esp_now_send(FindPeerById(Periph->GetPeerId())->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
    if (Self.GetDebugMode()) Serial.println(jsondata);
    
    return true;
}
void SendCommand(PeerClass *P, String Cmd) {
  JsonDocument doc; String jsondata; 
  
  doc["from"]  = Self.GetName();   
  doc["Order"] = Cmd;
  
  serializeJson(doc, jsondata);  
  
  TSMsgSnd = millis();
  esp_now_send(P->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
  if (Self.GetDebugMode()) Serial.println(jsondata);
}
void SendCommand(PeerClass *P, int Cmd) {
  JsonDocument doc; String jsondata; 
  
  doc["from"]  = Self.GetName();   
  doc["Order"] = Cmd;
  
  serializeJson(doc, jsondata);  
  
  TSMsgSnd = millis();
  esp_now_send(P->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
  if (Self.GetDebugMode()) Serial.println(jsondata);
}
void SendCommand(PeerClass *P, int Cmd, String Value) {
  JsonDocument doc; String jsondata; 
  
  doc["from"]  = Self.GetName();   
  doc["Order"] = Cmd;
  doc["Value"] = Value;
  
  serializeJson(doc, jsondata);  
  
  TSMsgSnd = millis();
  esp_now_send(P->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  //Sending "jsondata"  
  if (Self.GetDebugMode()) Serial.println(jsondata);
}
#pragma endregion Send-Things
#pragma region System-Screens
void PrepareJSON() {
  if (jsondataBuf) {
    JsonDocument doc;
  
    __attribute__((unused)) DeserializationError error = deserializeJson(doc, jsondataBuf);
    if (doc["Node"] != NODE_NAME) { 
      lv_textarea_set_placeholder_text(ui_TxtJSON1, jsondataBuf.c_str());
      jsondataBuf = "";
    }
  }
}
#pragma endregion System-Screens
#pragma region Other
void WriteStringToCharArray(String S, char *C) {
  int   ArrayLength = S.length()+1;    //The +1 is for the 0x00h Terminator
  S.toCharArray(C,ArrayLength);
}
bool ToggleSleepMode() 
{
    preferences.begin("JeepifyInit", false);
        Self.SetSleepMode(!Self.GetSleepMode());
        if (preferences.getBool("SleepMode", false) != Self.GetSleepMode()) preferences.putBool("SleepMode", Self.GetSleepMode());
    preferences.end();
    return Self.GetSleepMode();
}
bool ToggleDebugMode() {
  preferences.begin("JeepifyInit", false);
      Self.SetDebugMode(!Self.GetDebugMode());
      if (preferences.getBool("DebugMode", false) != Self.GetDebugMode()) preferences.putBool("DebugMode", Self.GetDebugMode());
  preferences.end();
  return Self.GetDebugMode();
}
bool TogglePairMode() {
  if (Self.GetPairMode())
  {
      Self.SetPairMode(false);
      TSPair = 0;
  }
  else 
  {
      Self.SetPairMode(true);
      TSPair = millis();
  };

  if (Self.GetDebugMode()) { Serial.print("PairMode changed to: "); Serial.println(Self.GetPairMode()); }
  
  return Self.GetPairMode();
}
void CalibVolt() {
  JsonDocument doc; String jsondata;
 
  doc["Node"]  = Self.GetName();  
  doc["Order"] = SEND_CMD_VOLTAGE_CALIB;
  doc["NewVoltage"] = lv_textarea_get_text(ui_TxtVolt);
  
  serializeJson(doc, jsondata);  

  esp_now_send(ActivePeer->GetBroadcastAddress(), (uint8_t *) jsondata.c_str(), 100);  
  if (Self.GetDebugMode()) Serial.println(jsondata);
}
void PrintMAC(const uint8_t * mac_addr){
  char macStr[18];
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  Serial.print(macStr);
}
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) { 
    if (Self.GetDebugMode()) {
        if (Self.GetDebugMode()) 
        {
            Serial.print("\r\nLast Packet Send Status:\t");
            Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
        }
    }
}

#pragma endregion Other
//