// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrVolt_screen_init(void)
{
    ui_ScrVolt = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrVolt, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrVolt, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrVolt, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrVolt, &ui_img_576858027, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Keyboard = lv_keyboard_create(ui_ScrVolt);
    lv_keyboard_set_mode(ui_Keyboard, LV_KEYBOARD_MODE_USER_1);
    lv_obj_set_width(ui_Keyboard, 401);
    lv_obj_set_height(ui_Keyboard, 202);
    lv_obj_set_x(ui_Keyboard, 5);
    lv_obj_set_y(ui_Keyboard, 10);
    lv_obj_set_align(ui_Keyboard, LV_ALIGN_CENTER);

    ui_TxtVolt = lv_textarea_create(ui_ScrVolt);
    lv_obj_set_width(ui_TxtVolt, 120);
    lv_obj_set_height(ui_TxtVolt, LV_SIZE_CONTENT);    /// 24
    lv_obj_set_x(ui_TxtVolt, -1);
    lv_obj_set_y(ui_TxtVolt, -130);
    lv_obj_set_align(ui_TxtVolt, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_TxtVolt, "voltage");
    lv_textarea_set_one_line(ui_TxtVolt, true);
    lv_obj_set_style_text_font(ui_TxtVolt, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_TxtVolt, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_TxtVolt, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_TxtVolt, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_TxtVolt, 5, LV_PART_MAIN | LV_STATE_DEFAULT);



    ui_LblVoltPeer = lv_label_create(ui_ScrVolt);
    lv_obj_set_width(ui_LblVoltPeer, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblVoltPeer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblVoltPeer, -1);
    lv_obj_set_y(ui_LblVoltPeer, 139);
    lv_obj_set_align(ui_LblVoltPeer, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblVoltPeer, "Peer");
    lv_obj_set_style_text_color(ui_LblVoltPeer, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblVoltPeer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblVoltPeer, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_keyboard_set_textarea(ui_Keyboard, ui_TxtVolt);
    lv_obj_add_event_cb(ui_Keyboard, ui_event_Keyboard, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_LblVoltPeer, ui_event_LblVoltPeer, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrVolt, ui_event_ScrVolt, LV_EVENT_ALL, NULL);

}
