// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"

void ui_ScrPeer_screen_init(void)
{
    ui_ScrPeer = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_ScrPeer, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_ScrPeer, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ScrPeer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_ScrPeer, &ui_img_576858027, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgPeerType = lv_img_create(ui_ScrPeer);
    lv_img_set_src(ui_ImgPeerType, &ui_img_ansgarmodule_4_png);
    lv_obj_set_width(ui_ImgPeerType, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ImgPeerType, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ImgPeerType, -148);
    lv_obj_set_y(ui_ImgPeerType, -80);
    lv_obj_set_align(ui_ImgPeerType, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ImgPeerType, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ImgPeerType, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ImgPeerType, 500);

    ui_LblPeerTypeLbl = lv_label_create(ui_ScrPeer);
    lv_obj_set_width(ui_LblPeerTypeLbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeerTypeLbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeerTypeLbl, -16);
    lv_obj_set_y(ui_LblPeerTypeLbl, -138);
    lv_obj_set_align(ui_LblPeerTypeLbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeerTypeLbl, "Type:");
    lv_obj_set_style_text_color(ui_LblPeerTypeLbl, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeerTypeLbl, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeerTypeLbl, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_LblPeerName = lv_label_create(ui_ScrPeer);
    lv_obj_set_width(ui_LblPeerName, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_LblPeerName, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_LblPeerName, -3);
    lv_obj_set_y(ui_LblPeerName, 136);
    lv_obj_set_align(ui_LblPeerName, LV_ALIGN_CENTER);
    lv_label_set_text(ui_LblPeerName, "Peer");
    lv_obj_set_style_text_color(ui_LblPeerName, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_LblPeerName, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_LblPeerName, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer1 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer1, 70);
    lv_obj_set_height(ui_BtnPeer1, 30);
    lv_obj_set_x(ui_BtnPeer1, 99);
    lv_obj_set_y(ui_BtnPeer1, 77);
    lv_obj_set_align(ui_BtnPeer1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer1, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer1Lbl = lv_label_create(ui_BtnPeer1);
    lv_obj_set_width(ui_BtnPeer1Lbl, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer1Lbl, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer1Lbl, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer1Lbl, "Restart");
    lv_obj_set_style_text_color(ui_BtnPeer1Lbl, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer1Lbl, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer2 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer2, 70);
    lv_obj_set_height(ui_BtnPeer2, 30);
    lv_obj_set_x(ui_BtnPeer2, 101);
    lv_obj_set_y(ui_BtnPeer2, 116);
    lv_obj_set_align(ui_BtnPeer2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer2, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer2, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer2Lbl1 = lv_label_create(ui_BtnPeer2);
    lv_obj_set_width(ui_BtnPeer2Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer2Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer2Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer2Lbl1, "Reset");
    lv_obj_set_style_text_color(ui_BtnPeer2Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer2Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer3 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer3, 70);
    lv_obj_set_height(ui_BtnPeer3, 30);
    lv_obj_set_x(ui_BtnPeer3, 182);
    lv_obj_set_y(ui_BtnPeer3, 78);
    lv_obj_set_align(ui_BtnPeer3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer3, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer3, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer3, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer3, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer3Lbl1 = lv_label_create(ui_BtnPeer3);
    lv_obj_set_width(ui_BtnPeer3Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer3Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer3Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer3Lbl1, "Sleep");
    lv_obj_set_style_text_color(ui_BtnPeer3Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer3Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer4 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer4, 70);
    lv_obj_set_height(ui_BtnPeer4, 30);
    lv_obj_set_x(ui_BtnPeer4, -105);
    lv_obj_set_y(ui_BtnPeer4, 78);
    lv_obj_set_align(ui_BtnPeer4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer4, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer4, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer4Lbl1 = lv_label_create(ui_BtnPeer4);
    lv_obj_set_width(ui_BtnPeer4Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer4Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer4Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer4Lbl1, "Eichen");
    lv_obj_set_style_text_color(ui_BtnPeer4Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer4Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer5 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer5, 70);
    lv_obj_set_height(ui_BtnPeer5, 30);
    lv_obj_set_x(ui_BtnPeer5, -104);
    lv_obj_set_y(ui_BtnPeer5, 119);
    lv_obj_set_align(ui_BtnPeer5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer5, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer5, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer5, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer5, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer5Lbl1 = lv_label_create(ui_BtnPeer5);
    lv_obj_set_width(ui_BtnPeer5Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer5Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer5Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer5Lbl1, "Volt");
    lv_obj_set_style_text_color(ui_BtnPeer5Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer5Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer6 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer6, 70);
    lv_obj_set_height(ui_BtnPeer6, 30);
    lv_obj_set_x(ui_BtnPeer6, 182);
    lv_obj_set_y(ui_BtnPeer6, 115);
    lv_obj_set_align(ui_BtnPeer6, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer6, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer6, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer6, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer6, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer6, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer6Lbl1 = lv_label_create(ui_BtnPeer6);
    lv_obj_set_width(ui_BtnPeer6Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer6Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer6Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer6Lbl1, "Demo");
    lv_obj_add_flag(ui_BtnPeer6Lbl1, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_set_style_text_color(ui_BtnPeer6Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer6Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer7 = lv_btn_create(ui_ScrPeer);
    lv_obj_set_width(ui_BtnPeer7, 70);
    lv_obj_set_height(ui_BtnPeer7, 30);
    lv_obj_set_x(ui_BtnPeer7, 0);
    lv_obj_set_y(ui_BtnPeer7, 78);
    lv_obj_set_align(ui_BtnPeer7, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BtnPeer7, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BtnPeer7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_BtnPeer7, lv_color_hex(0xAD0808), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_BtnPeer7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_BtnPeer7, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_BtnPeer7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_BtnPeer7, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BtnPeer7Lbl1 = lv_label_create(ui_BtnPeer7);
    lv_obj_set_width(ui_BtnPeer7Lbl1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BtnPeer7Lbl1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_BtnPeer7Lbl1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BtnPeer7Lbl1, "Delete");
    lv_obj_set_style_text_color(ui_BtnPeer7Lbl1, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BtnPeer7Lbl1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

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
    lv_img_set_src(ui_Image4, &ui_img_1253518904);
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

    lv_obj_add_event_cb(ui_BtnPeer1Lbl, ui_event_BtnPeer1Lbl, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer1, ui_event_BtnPeer1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer2, ui_event_BtnPeer2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer3, ui_event_BtnPeer3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer4, ui_event_BtnPeer4, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer5, ui_event_BtnPeer5, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer6, ui_event_BtnPeer6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer7Lbl1, ui_event_BtnPeer7Lbl1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BtnPeer7, ui_event_BtnPeer7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScrPeer, ui_event_ScrPeer, LV_EVENT_ALL, NULL);

}
