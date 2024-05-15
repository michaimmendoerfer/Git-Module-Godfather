// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Jeepify

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////


// SCREEN: ui_ScrMenu
void ui_ScrMenu_screen_init(void);
void ui_event_ScrMenu(lv_event_t * e);
lv_obj_t * ui_ScrMenu;
void ui_event_BtnMenu1(lv_event_t * e);
lv_obj_t * ui_BtnMenu1;
void ui_event_BtnMenu2(lv_event_t * e);
lv_obj_t * ui_BtnMenu2;
void ui_event_BtnMenu3(lv_event_t * e);
lv_obj_t * ui_BtnMenu3;
void ui_event_BtnMenu4(lv_event_t * e);
lv_obj_t * ui_BtnMenu4;
lv_obj_t * ui_LblMenuVersion;


// SCREEN: ui_ScrSettings
void ui_ScrSettings_screen_init(void);
void ui_event_ScrSettings(lv_event_t * e);
lv_obj_t * ui_ScrSettings;
void ui_event_BtnSet1(lv_event_t * e);
lv_obj_t * ui_BtnSet1;
lv_obj_t * ui_BtnSet1Lbl1;
void ui_event_BtnSet2(lv_event_t * e);
lv_obj_t * ui_BtnSet2;
lv_obj_t * ui_BtnSet2Lbl;
void ui_event_BtnSet3(lv_event_t * e);
lv_obj_t * ui_BtnSet3;
lv_obj_t * ui_BtnSet3Lbl3;
void ui_event_BtnSet4(lv_event_t * e);
lv_obj_t * ui_BtnSet4;
lv_obj_t * ui_BtnSet3Lbl1;
void ui_event_BtnSet5(lv_event_t * e);
lv_obj_t * ui_BtnSet5;
lv_obj_t * ui_BtnSet5Lbl;
void ui_event_BtnSet6(lv_event_t * e);
lv_obj_t * ui_BtnSet6;
lv_obj_t * ui_BtnSet3Lbl2;
void ui_event_BtnSet7(lv_event_t * e);
lv_obj_t * ui_BtnSet7;
lv_obj_t * ui_BtnSet7Lbl;
void ui_event_BtnSet8(lv_event_t * e);
lv_obj_t * ui_BtnSet8;
lv_obj_t * ui_BtnSet7Lbl1;


// SCREEN: ui_ScrPeers
void ui_ScrPeers_screen_init(void);
void ui_event_ScrPeers(lv_event_t * e);
lv_obj_t * ui_ScrPeers;
void ui_event_RollerPeers1(lv_event_t * e);
lv_obj_t * ui_RollerPeers1;
lv_obj_t * ui_LabelPeersName;


// SCREEN: ui_ScrJSON
void ui_ScrJSON_screen_init(void);
void ui_event_ScrJSON(lv_event_t * e);
lv_obj_t * ui_ScrJSON;
lv_obj_t * ui_TxtJSON1;
lv_obj_t * ui_LblJSON2;


// SCREEN: ui_ScrSingle
void ui_ScrSingle_screen_init(void);
void ui_event_ScrSingle(lv_event_t * e);
lv_obj_t * ui_ScrSingle;
lv_obj_t * ui_LblSinglePeer;
lv_obj_t * ui_LblSingleValue;
lv_obj_t * ui_LblSinglePeriph;


// SCREEN: ui_ScrPeer
void ui_ScrPeer_screen_init(void);
void ui_event_ScrPeer(lv_event_t * e);
lv_obj_t * ui_ScrPeer;
lv_obj_t * ui_ImgPeerType;
lv_obj_t * ui_LblPeerName;
lv_obj_t * ui_LblPeerTypeLbl;
void ui_event_BtnPeer1(lv_event_t * e);
lv_obj_t * ui_BtnPeer1;
void ui_event_BtnPeer1Lbl(lv_event_t * e);
lv_obj_t * ui_BtnPeer1Lbl;
void ui_event_BtnPeer2(lv_event_t * e);
lv_obj_t * ui_BtnPeer2;
lv_obj_t * ui_BtnPeer2Lbl1;
void ui_event_BtnPeer3(lv_event_t * e);
lv_obj_t * ui_BtnPeer3;
lv_obj_t * ui_BtnPeer3Lbl1;
void ui_event_BtnPeer4(lv_event_t * e);
lv_obj_t * ui_BtnPeer4;
lv_obj_t * ui_BtnPeer4Lbl1;
void ui_event_BtnPeer5(lv_event_t * e);
lv_obj_t * ui_BtnPeer5;
lv_obj_t * ui_BtnPeer5Lbl1;
void ui_event_BtnPeer6(lv_event_t * e);
lv_obj_t * ui_BtnPeer6;
lv_obj_t * ui_BtnPeer6Lbl1;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image5;
void ui_event_BtnPeer7(lv_event_t * e);
lv_obj_t * ui_BtnPeer7;
void ui_event_BtnPeer7Lbl1(lv_event_t * e);
lv_obj_t * ui_BtnPeer7Lbl1;


// SCREEN: ui_ScrEichen
void ui_ScrEichen_screen_init(void);
void ui_event_ScrEichen(lv_event_t * e);
lv_obj_t * ui_ScrEichen;
lv_obj_t * ui_Label1;
void ui_event_BtnEichenStart(lv_event_t * e);
lv_obj_t * ui_BtnEichenStart;
lv_obj_t * ui_BtnPeer4Lbl3;
lv_obj_t * ui_LblEichenPeer;


// SCREEN: ui_ScrVolt
void ui_ScrVolt_screen_init(void);
void ui_event_ScrVolt(lv_event_t * e);
lv_obj_t * ui_ScrVolt;
void ui_event_Keyboard(lv_event_t * e);
lv_obj_t * ui_Keyboard;
lv_obj_t * ui_TxtVolt;
void ui_event_LblVoltPeer(lv_event_t * e);
lv_obj_t * ui_LblVoltPeer;


// SCREEN: ui_ScrPeriph
void ui_ScrPeriph_screen_init(void);
void ui_event_ScrPeriph(lv_event_t * e);
lv_obj_t * ui_ScrPeriph;
lv_obj_t * ui_ImgPeerChoice;
lv_obj_t * ui_LblPeriphChoicePeer;
lv_obj_t * ui_LblPeriphChoiceType;
lv_obj_t * ui_LblPeriphChoiceOnline;
lv_obj_t * ui_LblPeriphChoicePeriph;


// SCREEN: ui_ScrMulti
void ui_ScrMulti_screen_init(void);
void ui_event_ScrMulti(lv_event_t * e);
lv_obj_t * ui_ScrMulti;
lv_obj_t * ui_LblMultiScreenName;
void ui_event_ButtonMulti1(lv_event_t * e);
lv_obj_t * ui_ButtonMulti1;
lv_obj_t * ui_Label6;
void ui_event_ButtonMulti2(lv_event_t * e);
lv_obj_t * ui_ButtonMulti2;
lv_obj_t * ui_Label2;
void ui_event_ButtonMulti3(lv_event_t * e);
lv_obj_t * ui_ButtonMulti3;
lv_obj_t * ui_Label3;
void ui_event_ButtonMulti4(lv_event_t * e);
lv_obj_t * ui_ButtonMulti4;
lv_obj_t * ui_Label4;


// SCREEN: ui_ScrSwitch
void ui_ScrSwitch_screen_init(void);
void ui_event_ScrSwitch(lv_event_t * e);
lv_obj_t * ui_ScrSwitch;
lv_obj_t * ui_LblSwitchPeer;
lv_obj_t * ui_LblSwitchPeriph;
void ui_event____initial_actions0(lv_event_t * e);
lv_obj_t * ui____initial_actions0;
const lv_img_dsc_t * ui_imgset_ansgarmodule_[1] = {&ui_img_ansgarmodule_4_png};
const lv_img_dsc_t * ui_imgset_236161557[1] = {&ui_img_576858027};
const lv_img_dsc_t * ui_imgset_857919995[1] = {&ui_img_1527887470};
const lv_img_dsc_t * ui_imgset_25820555[1] = {&ui_img_551600910};
const lv_img_dsc_t * ui_imgset_horstrelais[1] = {&ui_img_horstrelais2_png};
const lv_img_dsc_t * ui_imgset_menubtn[4] = {&ui_img_menubtn1_png, &ui_img_menubtn2_png, &ui_img_menubtn3_png, &ui_img_menubtn4_png};
const lv_img_dsc_t * ui_imgset_1265058017[1] = {&ui_img_1253518904};

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_ScrMenu(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Ui_Menu_Loaded(e);
    }
}
void ui_event_BtnMenu1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Menu_Btn1_Clicked(e);
    }
}
void ui_event_BtnMenu2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Menu_Btn2_Clicked(e);
    }
}
void ui_event_BtnMenu3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrMulti, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrMulti_screen_init);
    }
}
void ui_event_BtnMenu4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrSettings, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrSettings_screen_init);
    }
}
void ui_event_ScrSettings(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_ScrMenu_screen_init);
    }
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_Set_Prepare(e);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        Ui_Set_Leave(e);
    }
}
void ui_event_BtnSet1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Set_WebSvr(e);
    }
}
void ui_event_BtnSet2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Set_TogglePair(e);
    }
}
void ui_event_BtnSet3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Set_Restart(e);
    }
}
void ui_event_BtnSet4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_Set_Reset(e);
    }
}
void ui_event_BtnSet5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrPeers, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrPeers_screen_init);
    }
}
void ui_event_BtnSet6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrJSON, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrJSON_screen_init);
    }
}
void ui_event_BtnSet7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Set_ToggleDebug(e);
    }
}
void ui_event_BtnSet8(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Set_SavePeers(e);
    }
}
void ui_event_ScrPeers(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_Peers_Prepare(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrMenu_screen_init);
    }
}
void ui_event_RollerPeers1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_Peers_Selected(e);
    }
}
void ui_event_ScrJSON(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_JSON_Prepare(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrSettings, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_ScrSettings_screen_init);
    }
}
void ui_event_ScrSingle(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_ScrMenu_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Single_Next(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Single_Last(e);
    }
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_Single_Prepare(e);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        Ui_Single_Leave(e);
    }
}
void ui_event_ScrPeer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_Peer_Loaded(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Peer_Next(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Peer_Last(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_MOVE_TOP, 500, 0, &ui_ScrMenu_screen_init);
    }
}
void ui_event_BtnPeer1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Peer_Restart(e);
    }
}
void ui_event_BtnPeer1Lbl(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Peer_Restart(e);
    }
}
void ui_event_BtnPeer2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_Peer_Reset(e);
    }
}
void ui_event_BtnPeer3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Peer_ToggleSleep(e);
    }
}
void ui_event_BtnPeer4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrEichen, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrEichen_screen_init);
    }
}
void ui_event_BtnPeer5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_ScrVolt, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrVolt_screen_init);
    }
}
void ui_event_BtnPeer6(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Peer_ToggleDemo(e);
    }
}
void ui_event_BtnPeer7(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_Peer_Delete(e);
    }
}
void ui_event_BtnPeer7Lbl1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Peer_Restart(e);
    }
}
void ui_event_ScrEichen(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_ScrMenu_screen_init);
    }
}
void ui_event_BtnEichenStart(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Eichen_Start(e);
    }
}
void ui_event_ScrVolt(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Ui_Volt_Prepare(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_FADE_ON, 100, 0, &ui_ScrMenu_screen_init);
    }
}
void ui_event_Keyboard(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_READY) {
        Ui_Volt_Start(e);
    }
}
void ui_event_LblVoltPeer(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        (e);
    }
}
void ui_event_ScrPeriph(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMulti, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrMulti_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_PeriphChoice_Next(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_PeriphChoice_Last(e);
    }
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_PeriphChoice_Click(e);
    }
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Ui_Periph_Choice_Loaded(e);
    }
}
void ui_event_ScrMulti(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_FADE_ON, 50, 0, &ui_ScrMenu_screen_init);
    }
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Ui_Multi_Loaded(e);
    }
    if(event_code == LV_EVENT_SCREEN_UNLOAD_START) {
        Ui_Multi_Unload(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Multi_Next(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Multi_Prev(e);
    }
}
void ui_event_ButtonMulti1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Multi_Set_Panel1(e);
    }
}
void ui_event_ButtonMulti2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Multi_Set_Panel2(e);
    }
}
void ui_event_ButtonMulti3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Multi_Set_Panel3(e);
    }
}
void ui_event_ButtonMulti4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Multi_Set_Panel4(e);
    }
}
void ui_event_ScrSwitch(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_TOP) {
        lv_indev_wait_release(lv_indev_get_act());
        _ui_screen_change(&ui_ScrMenu, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0, &ui_ScrMenu_screen_init);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_LEFT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Switch_Next(e);
    }
    if(event_code == LV_EVENT_GESTURE &&  lv_indev_get_gesture_dir(lv_indev_get_act()) == LV_DIR_RIGHT) {
        lv_indev_wait_release(lv_indev_get_act());
        Ui_Switch_Prev(e);
    }
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Ui_Switch_Loaded(e);
    }
    if(event_code == LV_EVENT_LONG_PRESSED) {
        Ui_Switch_Long(e);
    }
    if(event_code == LV_EVENT_CLICKED) {
        Ui_Switch_Long(e);
    }
}
void ui_event____initial_actions0(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOAD_START) {
        Ui_Init_Custom(e);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScrMenu_screen_init();
    ui_ScrSettings_screen_init();
    ui_ScrPeers_screen_init();
    ui_ScrJSON_screen_init();
    ui_ScrSingle_screen_init();
    ui_ScrPeer_screen_init();
    ui_ScrEichen_screen_init();
    ui_ScrVolt_screen_init();
    ui_ScrPeriph_screen_init();
    ui_ScrMulti_screen_init();
    ui_ScrSwitch_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_obj_add_event_cb(ui____initial_actions0, ui_event____initial_actions0, LV_EVENT_ALL, NULL);

    lv_disp_load_scr(ui____initial_actions0);
    lv_disp_load_scr(ui_ScrMenu);
}
