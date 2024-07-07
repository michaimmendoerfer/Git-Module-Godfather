// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrSingle_screen_init(void)
{
    ui_ScrSingle = lv_obj_create(NULL);
    lv_obj_add_flag(ui_ScrSingle, LV_OBJ_FLAG_OVERFLOW_VISIBLE);     /// Flags
    lv_obj_clear_flag(ui_ScrSingle, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrSingle, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrSingle, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrSingle, &ui_img_1464630232, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ScrSingle, 100, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image9 = lv_img_create(ui_ScrSingle);
    lv_img_set_src(ui_Image9, &ui_img_1714525409);
    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);   /// 300
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);    /// 300
    lv_obj_set_align(ui_Image9, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LblSinglePeer = lv_label_create(ui_ScrSingle);
    lv_obj_set_width(ui_LblSinglePeer, 120);
    lv_obj_set_height(ui_LblSinglePeer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblSinglePeer, 350);
    lv_obj_set_y(ui_LblSinglePeer, 280);
    lv_label_set_text(ui_LblSinglePeer, "Peer");
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_align(ui_LblSinglePeer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblSinglePeer, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_LblSinglePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_LblSinglePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_LblSinglePeer, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LblSinglePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LblSinglePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LblSinglePeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LblSinglePeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblSingleValue = lv_label_create(ui_ScrSingle);
    lv_obj_set_width(ui_LblSingleValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblSingleValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblSingleValue, 1);
    lv_obj_set_y(ui_LblSingleValue, 65);
    lv_obj_set_align(ui_LblSingleValue, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblSingleValue, "Value");
    lv_obj_set_style_text_color(ui_LblSingleValue, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblSingleValue, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblSingleValue, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblSinglePeriph = lv_label_create(ui_ScrSingle);
    lv_obj_set_width(ui_LblSinglePeriph, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblSinglePeriph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblSinglePeriph, 0);
    lv_obj_set_y(ui_LblSinglePeriph, 26);
    lv_obj_set_align(ui_LblSinglePeriph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblSinglePeriph, "Periph");
    lv_obj_set_style_text_color(ui_LblSinglePeriph, lv_color_hex(0x111111), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblSinglePeriph, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblSinglePeriph, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnNavIn = lv_btn_create(ui_ScrSingle);
    lv_obj_set_width(ui_BtnNavIn, 50);
    lv_obj_set_height(ui_BtnNavIn, 50);
    lv_obj_set_x(ui_BtnNavIn, -211);
    lv_obj_set_y(ui_BtnNavIn, -8);
    lv_obj_set_align(ui_BtnNavIn, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnNavIn, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavIn, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavIn, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnNavIn, &ui_img_g3_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavIn, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavIn, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavIn, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_NavPanel = lv_obj_create(ui_ScrSingle);
    lv_obj_set_width(ui_NavPanel, 65);
    lv_obj_set_height(ui_NavPanel, 300);
    lv_obj_set_x(ui_NavPanel, -280);
    lv_obj_set_y(ui_NavPanel, 0);
    lv_obj_set_align(ui_NavPanel, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_NavPanel, LV_OBJ_FLAG_OVERFLOW_VISIBLE);     /// Flags
    lv_obj_clear_flag(ui_NavPanel, LV_OBJ_FLAG_GESTURE_BUBBLE | LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC |
                      LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_scrollbar_mode(ui_NavPanel, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_scroll_dir(ui_NavPanel, LV_DIR_TOP);
    ui_object_set_themeable_style_property(ui_NavPanel, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_NavPanel, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);

    lv_obj_set_style_pad_left(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(ui_NavPanel, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_BtnNavMenu = lv_btn_create(ui_NavPanel);
    lv_obj_set_width(ui_BtnNavMenu, 50);
    lv_obj_set_height(ui_BtnNavMenu, 50);
    lv_obj_set_x(ui_BtnNavMenu, 0);
    lv_obj_set_y(ui_BtnNavMenu, -117);
    lv_obj_set_align(ui_BtnNavMenu, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnNavMenu, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavMenu, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblBtnNavMenu = lv_label_create(ui_BtnNavMenu);
    lv_obj_set_width(ui_LblBtnNavMenu, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblBtnNavMenu, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_LblBtnNavMenu, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblBtnNavMenu, "X");
    ui_object_set_themeable_style_property(ui_LblBtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_LblBtnNavMenu, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_font(ui_LblBtnNavMenu, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnNavSingle = lv_btn_create(ui_NavPanel);
    lv_obj_set_width(ui_BtnNavSingle, 50);
    lv_obj_set_height(ui_BtnNavSingle, 50);
    lv_obj_set_x(ui_BtnNavSingle, 0);
    lv_obj_set_y(ui_BtnNavSingle, -62);
    lv_obj_set_align(ui_BtnNavSingle, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnNavSingle, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSingle, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavSingle, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnNavSingle, &ui_img_1156157770, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSingle, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavSingle, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavSingle, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnNavMulti = lv_btn_create(ui_NavPanel);
    lv_obj_set_width(ui_BtnNavMulti, 50);
    lv_obj_set_height(ui_BtnNavMulti, 50);
    lv_obj_set_x(ui_BtnNavMulti, 0);
    lv_obj_set_y(ui_BtnNavMulti, -5);
    lv_obj_set_align(ui_BtnNavMulti, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnNavMulti, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavMulti, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavMulti, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnNavMulti, &ui_img_546008632, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavMulti, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavMulti, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavMulti, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnNavSwitch = lv_btn_create(ui_NavPanel);
    lv_obj_set_width(ui_BtnNavSwitch, 50);
    lv_obj_set_height(ui_BtnNavSwitch, 50);
    lv_obj_set_x(ui_BtnNavSwitch, 0);
    lv_obj_set_y(ui_BtnNavSwitch, 54);
    lv_obj_set_align(ui_BtnNavSwitch, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnNavSwitch, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSwitch, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavSwitch, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnNavSwitch, &ui_img_215445388, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSwitch, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavSwitch, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavSwitch, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnNavSettings = lv_btn_create(ui_NavPanel);
    lv_obj_set_width(ui_BtnNavSettings, 50);
    lv_obj_set_height(ui_BtnNavSettings, 50);
    lv_obj_set_x(ui_BtnNavSettings, 0);
    lv_obj_set_y(ui_BtnNavSettings, 115);
    lv_obj_set_align(ui_BtnNavSettings, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnNavSettings, LV_OBJ_FLAG_OVERFLOW_VISIBLE);     /// Flags
    lv_obj_clear_flag(ui_BtnNavSettings,
                      LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM |
                      LV_OBJ_FLAG_SCROLL_CHAIN);     /// Flags
    lv_obj_set_style_radius(ui_BtnNavSettings, 30, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSettings, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnNavSettings, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnNavSettings, &ui_img_44778140, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnNavSettings, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnNavSettings, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnNavSettings, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSingleNext = lv_btn_create(ui_ScrSingle);
    lv_obj_set_width(ui_BtnSingleNext, 50);
    lv_obj_set_height(ui_BtnSingleNext, 50);
    lv_obj_set_x(ui_BtnSingleNext, 196);
    lv_obj_set_y(ui_BtnSingleNext, 24);
    lv_obj_set_align(ui_BtnSingleNext, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnSingleNext, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnSingleNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSingleNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnSingleNext, &ui_img_694597045, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnSingleNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSingleNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSingleNext, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSingleNext1 = lv_btn_create(ui_ScrSingle);
    lv_obj_set_width(ui_BtnSingleNext1, 50);
    lv_obj_set_height(ui_BtnSingleNext1, 50);
    lv_obj_set_x(ui_BtnSingleNext1, 197);
    lv_obj_set_y(ui_BtnSingleNext1, -45);
    lv_obj_set_align(ui_BtnSingleNext1, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnSingleNext1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnSingleNext1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSingleNext1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnSingleNext1, &ui_img_315456014, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnSingleNext1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSingleNext1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSingleNext1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_BtnNavIn, ui_event_BtnNavIn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnNavMenu, ui_event_BtnNavMenu, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnNavSingle, ui_event_BtnNavSingle, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnNavMulti, ui_event_BtnNavMulti, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnNavSwitch, ui_event_BtnNavSwitch, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnNavSettings, ui_event_BtnNavSettings, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSingleNext, ui_event_BtnSingleNext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSingleNext1, ui_event_BtnSingleNext1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrSingle, ui_event_ScrSingle, LV_EVENT_ALL, NULL);

}
