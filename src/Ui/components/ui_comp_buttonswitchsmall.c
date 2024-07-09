#include "../ui.h"


// COMPONENT ButtonSwitchSmall

lv_obj_t * ui_ButtonSwitchSmall_create(lv_obj_t * comp_parent, int x, int y, int Pos, char* PeerName, char *PeriphName)
{	
	lv_obj_t * cui_ButtonSwitchSmall;	
	cui_ButtonSwitchSmall = lv_imgbtn_create(comp_parent);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1640860301, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_743505413, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_743505413, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_888658411, NULL);
    lv_obj_set_height(cui_ButtonSwitchSmall, 120);
    lv_obj_set_width(cui_ButtonSwitchSmall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(cui_ButtonSwitchSmall, x);
    lv_obj_set_y(cui_ButtonSwitchSmall, y);
    lv_obj_set_align(cui_ButtonSwitchSmall, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_ButtonSwitchSmall, LV_OBJ_FLAG_CHECKABLE);     /// Flags

	lv_obj_t *cui_LblSwitchPeer = lv_label_create(cui_ButtonSwitchSmall);
    if (!PeerName) lv_obj_add_flag(cui_LblSwitchPeer, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_width(cui_LblSwitchPeer, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblSwitchPeer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblSwitchPeer, 0);
    lv_obj_set_y(cui_LblSwitchPeer, -45);
    lv_obj_set_align(cui_LblSwitchPeer, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblSwitchPeer, PeerName);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_font(cui_LblSwitchPeer, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(cui_LblSwitchPeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(cui_LblSwitchPeer, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(cui_LblSwitchPeer, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_LblSwitchPeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_LblSwitchPeer, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_LblSwitchPeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_LblSwitchPeer, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

	lv_obj_t *cui_LblSwitchPeriph = lv_label_create(cui_ButtonSwitchSmall);
    if (!PeriphName) lv_obj_add_flag(cui_LblSwitchPeriph, LV_OBJ_FLAG_HIDDEN);
	lv_obj_set_width(cui_LblSwitchPeriph, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblSwitchPeriph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblSwitchPeriph, 0);
    lv_obj_set_y(cui_LblSwitchPeriph, -80);
    lv_obj_set_align(cui_LblSwitchPeriph, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblSwitchPeriph, PeriphName);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_font(cui_LblSwitchPeriph, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(cui_LblSwitchPeriph, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(cui_LblSwitchPeriph, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(cui_LblSwitchPeriph, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_LblSwitchPeriph, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_LblSwitchPeriph, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_LblSwitchPeriph, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_LblSwitchPeriph, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t *cui_LblSwitchAmp = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblSwitchAmp, 101);
    lv_obj_set_height(cui_LblSwitchAmp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblSwitchAmp, 0);
    lv_obj_set_y(cui_LblSwitchAmp, 80);
    lv_obj_set_align(cui_LblSwitchAmp, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblSwitchAmp, "28.8 A");
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_COLOR,
                                           _ui_theme_color_BtnTxt);
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_TEXT_OPA,
                                           _ui_theme_alpha_BtnTxt);
    lv_obj_set_style_text_align(cui_LblSwitchAmp, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_LblSwitchAmp, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(cui_LblSwitchAmp, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_COLOR,
                                           _ui_theme_color_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BG_OPA,
                                           _ui_theme_alpha_BtnBg);
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_COLOR,
                                           _ui_theme_color_BtnBorder);
    ui_object_set_themeable_style_property(cui_LblSwitchAmp, LV_PART_MAIN | LV_STATE_DEFAULT, LV_STYLE_BORDER_OPA,
                                           _ui_theme_alpha_BtnBorder);
    lv_obj_set_style_border_width(cui_LblSwitchAmp, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(cui_LblSwitchAmp, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(cui_LblSwitchAmp, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(cui_LblSwitchAmp, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(cui_LblSwitchAmp, 1, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_LblPosition;
    cui_LblPosition = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblPosition, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblPosition, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblPosition, 20);
    lv_obj_set_y(cui_LblPosition, 0);
    lv_obj_set_align(cui_LblPosition, LV_ALIGN_CENTER);
	lv_label_set_text_fmt(cui_LblPosition, "%d", Pos);
    lv_obj_set_style_text_color(cui_LblPosition, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_LblPosition, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

	lv_obj_t *cui_SpinnerSwitch = lv_spinner_create(cui_ButtonSwitchSmall, 1000, 90);
    lv_obj_set_width(cui_SpinnerSwitch, 100);
    lv_obj_set_height(cui_SpinnerSwitch, 100);
    lv_obj_set_align(cui_SpinnerSwitch, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_SpinnerSwitch, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(cui_SpinnerSwitch, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_color(cui_SpinnerSwitch, lv_color_hex(0x83061F), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(cui_SpinnerSwitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(cui_SpinnerSwitch, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(cui_SpinnerSwitch, 5, LV_PART_MAIN | LV_STATE_CHECKED);

    lv_obj_set_style_arc_color(cui_SpinnerSwitch, lv_color_hex(0x31020B), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(cui_SpinnerSwitch, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(cui_SpinnerSwitch, 5, LV_PART_INDICATOR | LV_STATE_CHECKED);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTONSWITCHSMALL_NUM);
    children[UI_COMP_BUTTONSWITCHSMALL_BUTTONSWITCHSMALL] = cui_ButtonSwitchSmall;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPEER] = cui_LblSwitchPeer;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPERIPH] = cui_LblSwitchPeriph;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLVALUE] = cui_LblSwitchAmp;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPOSITION] = cui_LblPosition;
	children[UI_COMP_BUTTONSWITCHSMALL_SPINNER] = cui_SpinnerSwitch;
    lv_obj_add_event_cb(cui_ButtonSwitchSmall, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_ButtonSwitchSmall, del_component_child_event_cb, LV_EVENT_DELETE, children);
    //ui_comp_ButtonSwitchSmall_create_hook(cui_ButtonSwitchSmall);
    return cui_ButtonSwitchSmall;
}