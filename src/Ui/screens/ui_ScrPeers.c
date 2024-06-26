// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrPeers_screen_init(void)
{
    ui_ScrPeers = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrPeers, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrPeers, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrPeers, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrPeers, &ui_img_1464630232, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_opa(ui_ScrPeers, 75, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_RollerPeers1 = lv_roller_create(ui_ScrPeers);
    lv_roller_set_options(ui_RollerPeers1, "Option 1\nOption 2\nOption 3", LV_ROLLER_MODE_NORMAL);
    lv_obj_set_width(ui_RollerPeers1, lv_pct(70));
    lv_obj_set_height(ui_RollerPeers1, lv_pct(70));
    lv_obj_set_x(ui_RollerPeers1, 0);
    lv_obj_set_y(ui_RollerPeers1, 30);
    lv_obj_set_align(ui_RollerPeers1, LV_ALIGN_CENTER);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxtInaktive);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxtInaktive);
    lv_obj_set_style_text_font(ui_RollerPeers1, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);

    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_SELECTED | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_SELECTED | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_SELECTED | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnSelected);
    ui_object_set_themeable_style_property(ui_RollerPeers1, LV_PART_SELECTED | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnSelected);

    ui_LabelPeersName = lv_label_create(ui_ScrPeers);
    lv_obj_set_width(ui_LabelPeersName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LabelPeersName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LabelPeersName, 0);
    lv_obj_set_y(ui_LabelPeersName, -130);
    lv_obj_set_align(ui_LabelPeersName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LabelPeersName, "Peers");
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_font(ui_LabelPeersName, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_LabelPeersName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(ui_LabelPeersName, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(ui_LabelPeersName, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_LabelPeersName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_LabelPeersName, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_LabelPeersName, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_LabelPeersName, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_RollerPeers1, ui_event_RollerPeers1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrPeers, ui_event_ScrPeers, LV_EVENT_ALL, NULL);

}
