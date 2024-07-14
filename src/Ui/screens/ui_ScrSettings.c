// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrSettings_screen_init(void)
{
    ui_ScrSettings = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrSettings, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrSettings, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrSettings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrSettings, &ui_img_1464630232, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ScrSettings, 75, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet1 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet1, 120);
    lv_obj_set_height(ui_BtnSet1, 40);
    lv_obj_set_x(ui_BtnSet1, 40);
    lv_obj_set_y(ui_BtnSet1, -80);
    lv_obj_set_align(ui_BtnSet1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet1Lbl1 = lv_label_create(ui_BtnSet1);
    lv_obj_set_width(ui_BtnSet1Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet1Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet1Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet1Lbl1, "WebSvr");
    ui_object_set_themeable_style_property(ui_BtnSet1Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet1Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet2 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet2, 120);
    lv_obj_set_height(ui_BtnSet2, 40);
    lv_obj_set_x(ui_BtnSet2, 40);
    lv_obj_set_y(ui_BtnSet2, 80);
    lv_obj_set_align(ui_BtnSet2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet2, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BtnSet2, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_BtnSet2, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_BtnSet2, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_opa(ui_BtnSet2, 255, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui_BtnSet2, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DISABLED);
    lv_obj_set_style_bg_opa(ui_BtnSet2, 50, LV_PART_MAIN | LV_STATE_DISABLED);

    ui_BtnSet2Lbl = lv_label_create(ui_BtnSet2);
    lv_obj_set_width(ui_BtnSet2Lbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet2Lbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BtnSet2Lbl, 0);
    lv_obj_set_y(ui_BtnSet2Lbl, 1);
    lv_obj_set_align(ui_BtnSet2Lbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet2Lbl, "Pair");
    ui_object_set_themeable_style_property(ui_BtnSet2Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet2Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet3 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet3, 120);
    lv_obj_set_height(ui_BtnSet3, 40);
    lv_obj_set_x(ui_BtnSet3, 40);
    lv_obj_set_y(ui_BtnSet3, 130);
    lv_obj_set_align(ui_BtnSet3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet3Lbl3 = lv_label_create(ui_BtnSet3);
    lv_obj_set_width(ui_BtnSet3Lbl3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet3Lbl3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet3Lbl3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet3Lbl3, "Restart");
    ui_object_set_themeable_style_property(ui_BtnSet3Lbl3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet3Lbl3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet4 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet4, 120);
    lv_obj_set_height(ui_BtnSet4, 40);
    lv_obj_set_x(ui_BtnSet4, 175);
    lv_obj_set_y(ui_BtnSet4, 130);
    lv_obj_set_align(ui_BtnSet4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet3Lbl1 = lv_label_create(ui_BtnSet4);
    lv_obj_set_width(ui_BtnSet3Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet3Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet3Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet3Lbl1, "Reset");
    ui_object_set_themeable_style_property(ui_BtnSet3Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet3Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet5 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet5, 120);
    lv_obj_set_height(ui_BtnSet5, 40);
    lv_obj_set_x(ui_BtnSet5, 175);
    lv_obj_set_y(ui_BtnSet5, -130);
    lv_obj_set_align(ui_BtnSet5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet5, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet5Lbl = lv_label_create(ui_BtnSet5);
    lv_obj_set_width(ui_BtnSet5Lbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet5Lbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet5Lbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet5Lbl, "Peers");
    ui_object_set_themeable_style_property(ui_BtnSet5Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet5Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet6 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet6, 120);
    lv_obj_set_height(ui_BtnSet6, 40);
    lv_obj_set_x(ui_BtnSet6, 40);
    lv_obj_set_y(ui_BtnSet6, -130);
    lv_obj_set_align(ui_BtnSet6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet6, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet3Lbl2 = lv_label_create(ui_BtnSet6);
    lv_obj_set_width(ui_BtnSet3Lbl2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet3Lbl2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet3Lbl2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet3Lbl2, "JSON");
    lv_obj_set_style_text_color(ui_BtnSet3Lbl2, lv_color_hex(0x182C39), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnSet3Lbl2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet7 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet7, 120);
    lv_obj_set_height(ui_BtnSet7, 40);
    lv_obj_set_x(ui_BtnSet7, 175);
    lv_obj_set_y(ui_BtnSet7, -80);
    lv_obj_set_align(ui_BtnSet7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet7, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet7, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_BtnSet7, lv_color_hex(0xFF0000), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_BtnSet7, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_BtnSet7Lbl = lv_label_create(ui_BtnSet7);
    lv_obj_set_width(ui_BtnSet7Lbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet7Lbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet7Lbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet7Lbl, "Debug");
    ui_object_set_themeable_style_property(ui_BtnSet7Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet7Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnSet8 = lv_btn_create(ui_ScrSettings);
    lv_obj_set_width(ui_BtnSet8, 120);
    lv_obj_set_height(ui_BtnSet8, 40);
    lv_obj_set_x(ui_BtnSet8, 175);
    lv_obj_set_y(ui_BtnSet8, 80);
    lv_obj_set_align(ui_BtnSet8, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnSet8, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnSet8, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnSet8, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet8, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnSet8, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnSet8, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnSet8, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnSet8, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnSet7Lbl1 = lv_label_create(ui_BtnSet8);
    lv_obj_set_width(ui_BtnSet7Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnSet7Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnSet7Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnSet7Lbl1, "Save");
    ui_object_set_themeable_style_property(ui_BtnSet7Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnSet7Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    lv_obj_add_event_cb(ui_BtnSet1, ui_event_BtnSet1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet2, ui_event_BtnSet2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet3, ui_event_BtnSet3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet4, ui_event_BtnSet4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet5, ui_event_BtnSet5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet6, ui_event_BtnSet6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet7, ui_event_BtnSet7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnSet8, ui_event_BtnSet8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrSettings, ui_event_ScrSettings, LV_EVENT_ALL, NULL);

}
