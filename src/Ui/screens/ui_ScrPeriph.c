// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrPeriph_screen_init(void)
{
    ui_ScrPeriph = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrPeriph, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrPeriph, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrPeriph, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrPeriph, &ui_img_1464630232, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ScrPeriph, 75, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgPeerChoice = lv_img_create(ui_ScrPeriph);
    lv_img_set_src(ui_ImgPeerChoice, &ui_img_485462261);
    lv_obj_set_width(ui_ImgPeerChoice, LV_SIZE_CONTENT);   /// 60
    lv_obj_set_height(ui_ImgPeerChoice, LV_SIZE_CONTENT);    /// 79
    lv_obj_set_x(ui_ImgPeerChoice, -13);
    lv_obj_set_y(ui_ImgPeerChoice, -6);
    lv_obj_set_align(ui_ImgPeerChoice, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImgPeerChoice, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImgPeerChoice, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_LblPeriphChoicePeer = lv_label_create(ui_ScrPeriph);
    lv_obj_set_width(ui_LblPeriphChoicePeer, 120);
    lv_obj_set_height(ui_LblPeriphChoicePeer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeriphChoicePeer, 171);
    lv_obj_set_y(ui_LblPeriphChoicePeer, 136);
    lv_obj_set_align(ui_LblPeriphChoicePeer, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeriphChoicePeer, "Peer");
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_align(ui_LblPeriphChoicePeer, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeriphChoicePeer, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_LblPeriphChoicePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_LblPeriphChoicePeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_LblPeriphChoicePeer, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LblPeriphChoicePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LblPeriphChoicePeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LblPeriphChoicePeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LblPeriphChoicePeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblPeriphChoiceType = lv_label_create(ui_ScrPeriph);
    lv_obj_set_width(ui_LblPeriphChoiceType, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeriphChoiceType, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeriphChoiceType, 28);
    lv_obj_set_y(ui_LblPeriphChoiceType, -142);
    lv_obj_set_align(ui_LblPeriphChoiceType, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeriphChoiceType, "Type: ");
    lv_obj_set_style_text_color(ui_LblPeriphChoiceType, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeriphChoiceType, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeriphChoiceType, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblPeriphChoiceOnline = lv_label_create(ui_ScrPeriph);
    lv_obj_set_width(ui_LblPeriphChoiceOnline, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeriphChoiceOnline, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeriphChoiceOnline, -16);
    lv_obj_set_y(ui_LblPeriphChoiceOnline, -113);
    lv_obj_set_align(ui_LblPeriphChoiceOnline, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeriphChoiceOnline, "Online");
    lv_obj_set_style_text_color(ui_LblPeriphChoiceOnline, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeriphChoiceOnline, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeriphChoiceOnline, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblPeriphChoicePeriph = lv_label_create(ui_ScrPeriph);
    lv_obj_set_width(ui_LblPeriphChoicePeriph, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeriphChoicePeriph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeriphChoicePeriph, -64);
    lv_obj_set_y(ui_LblPeriphChoicePeriph, -143);
    lv_obj_set_align(ui_LblPeriphChoicePeriph, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeriphChoicePeriph, "Name");
    lv_obj_set_style_text_color(ui_LblPeriphChoicePeriph, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeriphChoicePeriph, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeriphChoicePeriph, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeriphNext = lv_btn_create(ui_ScrPeriph);
    lv_obj_set_width(ui_BtnPeriphNext, 50);
    lv_obj_set_height(ui_BtnPeriphNext, 50);
    lv_obj_set_x(ui_BtnPeriphNext, 197);
    lv_obj_set_y(ui_BtnPeriphNext, -45);
    lv_obj_set_align(ui_BtnPeriphNext, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnPeriphNext, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeriphNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeriphNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnPeriphNext, &ui_img_315456014, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeriphNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeriphNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeriphNext, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeriphLast = lv_btn_create(ui_ScrPeriph);
    lv_obj_set_width(ui_BtnPeriphLast, 50);
    lv_obj_set_height(ui_BtnPeriphLast, 50);
    lv_obj_set_x(ui_BtnPeriphLast, 196);
    lv_obj_set_y(ui_BtnPeriphLast, 24);
    lv_obj_set_align(ui_BtnPeriphLast, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnPeriphLast, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeriphLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeriphLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnPeriphLast, &ui_img_694597045, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeriphLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeriphLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeriphLast, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_BtnPeriphNext, ui_event_BtnPeriphNext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeriphLast, ui_event_BtnPeriphLast, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrPeriph, ui_event_ScrPeriph, LV_EVENT_ALL, NULL);

}
