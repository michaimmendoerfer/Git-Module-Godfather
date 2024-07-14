// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrPeer_screen_init(void)
{
    ui_ScrPeer = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrPeer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrPeer, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrPeer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrPeer, &ui_img_1464630232, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ScrPeer, 75, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgPeerType = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_ImgPeerType, &ui_img_ansgarmodule_4_png);
    lv_obj_set_width(ui_ImgPeerType, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImgPeerType, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImgPeerType, 36);
    lv_obj_set_y(ui_ImgPeerType, -24);
    lv_obj_set_align(ui_ImgPeerType, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImgPeerType, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImgPeerType, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ImgPeerType, 200);

    ui_LblPeerTypeLbl = lv_label_create(ui_ScrPeer);
    lv_obj_set_width(ui_LblPeerTypeLbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeerTypeLbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeerTypeLbl, 38);
    lv_obj_set_y(ui_LblPeerTypeLbl, 30);
    lv_obj_set_align(ui_LblPeerTypeLbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeerTypeLbl, "Type:");
    lv_obj_set_style_text_color(ui_LblPeerTypeLbl, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeerTypeLbl, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeerTypeLbl, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblPeerName = lv_label_create(ui_ScrPeer);
    lv_obj_set_width(ui_LblPeerName, 120);
    lv_obj_set_height(ui_LblPeerName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeerName, -95);
    lv_obj_set_y(ui_LblPeerName, -130);
    lv_obj_set_align(ui_LblPeerName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeerName, "Peer");
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_align(ui_LblPeerName, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeerName, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_LblPeerName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_LblPeerName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_LblPeerName, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LblPeerName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LblPeerName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LblPeerName, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LblPeerName, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer1 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer1, 120);
    lv_obj_set_height(ui_BtnPeer1, 40);
    lv_obj_set_x(ui_BtnPeer1, 40);
    lv_obj_set_y(ui_BtnPeer1, 130);
    lv_obj_set_align(ui_BtnPeer1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer1Lbl = lv_label_create(ui_BtnPeer1);
    lv_obj_set_width(ui_BtnPeer1Lbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer1Lbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer1Lbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer1Lbl, "Restart");
    ui_object_set_themeable_style_property(ui_BtnPeer1Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer1Lbl, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer2 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer2, 120);
    lv_obj_set_height(ui_BtnPeer2, 40);
    lv_obj_set_x(ui_BtnPeer2, 175);
    lv_obj_set_y(ui_BtnPeer2, 130);
    lv_obj_set_align(ui_BtnPeer2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer2, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer2, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer2Lbl1 = lv_label_create(ui_BtnPeer2);
    lv_obj_set_width(ui_BtnPeer2Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer2Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer2Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer2Lbl1, "Reset");
    ui_object_set_themeable_style_property(ui_BtnPeer2Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer2Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer3 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer3, 120);
    lv_obj_set_height(ui_BtnPeer3, 40);
    lv_obj_set_x(ui_BtnPeer3, 175);
    lv_obj_set_y(ui_BtnPeer3, -130);
    lv_obj_set_align(ui_BtnPeer3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer3, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer3, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer3, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer3Lbl1 = lv_label_create(ui_BtnPeer3);
    lv_obj_set_width(ui_BtnPeer3Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer3Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer3Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer3Lbl1, "Sleep");
    ui_object_set_themeable_style_property(ui_BtnPeer3Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer3Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer4 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer4, 120);
    lv_obj_set_height(ui_BtnPeer4, 40);
    lv_obj_set_x(ui_BtnPeer4, 40);
    lv_obj_set_y(ui_BtnPeer4, 80);
    lv_obj_set_align(ui_BtnPeer4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer4, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer4, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer4Lbl1 = lv_label_create(ui_BtnPeer4);
    lv_obj_set_width(ui_BtnPeer4Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer4Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer4Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer4Lbl1, "Eichen");
    ui_object_set_themeable_style_property(ui_BtnPeer4Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer4Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer5 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer5, 120);
    lv_obj_set_height(ui_BtnPeer5, 40);
    lv_obj_set_x(ui_BtnPeer5, 175);
    lv_obj_set_y(ui_BtnPeer5, 80);
    lv_obj_set_align(ui_BtnPeer5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer5, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer5, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer5Lbl1 = lv_label_create(ui_BtnPeer5);
    lv_obj_set_width(ui_BtnPeer5Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer5Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer5Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer5Lbl1, "Volt");
    ui_object_set_themeable_style_property(ui_BtnPeer5Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer5Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer6 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer6, 120);
    lv_obj_set_height(ui_BtnPeer6, 40);
    lv_obj_set_x(ui_BtnPeer6, 40);
    lv_obj_set_y(ui_BtnPeer6, -130);
    lv_obj_set_align(ui_BtnPeer6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer6, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer6, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BtnPeer6, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer6Lbl1 = lv_label_create(ui_BtnPeer6);
    lv_obj_set_width(ui_BtnPeer6Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer6Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer6Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer6Lbl1, "Demo");
    lv_obj_add_flag(ui_BtnPeer6Lbl1, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer6Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer6Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_BtnPeer7 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer7, 120);
    lv_obj_set_height(ui_BtnPeer7, 40);
    lv_obj_set_x(ui_BtnPeer7, 51);
    lv_obj_set_y(ui_BtnPeer7, -76);
    lv_obj_set_align(ui_BtnPeer7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer7, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    ui_object_set_themeable_style_property(ui_BtnPeer7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeer7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeer7, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeer7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer7Lbl1 = lv_label_create(ui_BtnPeer7);
    lv_obj_set_width(ui_BtnPeer7Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer7Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer7Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer7Lbl1, "Delete");
    ui_object_set_themeable_style_property(ui_BtnPeer7Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_BtnPeer7Lbl1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);

    ui_Image2 = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_Image2, &ui_img_friedermodule_disp_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image2, 93);
    lv_obj_set_y(ui_Image2, -73);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image3 = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_Image3, &ui_img_horstrelais2_png);
    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image3, -95);
    lv_obj_set_y(ui_Image3, -70);
    lv_obj_set_align(ui_Image3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image4 = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_Image4, &ui_img_1769637049);
    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image4, -83);
    lv_obj_set_y(ui_Image4, 110);
    lv_obj_set_align(ui_Image4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Image5 = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_Image5, &ui_img_rolfmodule_round_png);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image5, 75);
    lv_obj_set_y(ui_Image5, 112);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BtnPeerNext = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeerNext, 50);
    lv_obj_set_height(ui_BtnPeerNext, 50);
    lv_obj_set_x(ui_BtnPeerNext, 209);
    lv_obj_set_y(ui_BtnPeerNext, -53);
    lv_obj_set_align(ui_BtnPeerNext, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnPeerNext, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeerNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeerNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnPeerNext, &ui_img_315456014, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeerNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeerNext, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeerNext, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeerLast = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeerLast, 50);
    lv_obj_set_height(ui_BtnPeerLast, 50);
    lv_obj_set_x(ui_BtnPeerLast, 208);
    lv_obj_set_y(ui_BtnPeerLast, 9);
    lv_obj_set_align(ui_BtnPeerLast, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_BtnPeerLast, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeerLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_BtnPeerLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    lv_obj_set_style_bg_img_src(ui_BtnPeerLast, &ui_img_694597045, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_BtnPeerLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_BtnPeerLast, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_BtnPeerLast, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_BtnPeer1Lbl, ui_event_BtnPeer1Lbl, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer1, ui_event_BtnPeer1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer2, ui_event_BtnPeer2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer3, ui_event_BtnPeer3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer4, ui_event_BtnPeer4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer5, ui_event_BtnPeer5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer6, ui_event_BtnPeer6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer7Lbl1, ui_event_BtnPeer7Lbl1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer7, ui_event_BtnPeer7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeerNext, ui_event_BtnPeerNext, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeerLast, ui_event_BtnPeerLast, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrPeer, ui_event_ScrPeer, LV_EVENT_ALL, NULL);

}
