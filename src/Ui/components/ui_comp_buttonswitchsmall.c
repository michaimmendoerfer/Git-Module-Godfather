// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.1
// LVGL version: 8.3.6
// Project name: Jeepify

#include "../ui.h"


// COMPONENT ButtonSwitchSmall

lv_obj_t * ui_ButtonSwitchSmall_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_ButtonSwitchSmall;
    cui_ButtonSwitchSmall = lv_imgbtn_create(comp_parent);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_1562670045, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_1562670045, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_CHECKED_PRESSED, NULL, &ui_img_587468927, NULL);
    lv_imgbtn_set_src(cui_ButtonSwitchSmall, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_587468927, NULL);
    lv_obj_set_height(cui_ButtonSwitchSmall, 100);
    lv_obj_set_width(cui_ButtonSwitchSmall, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(cui_ButtonSwitchSmall, 49);
    lv_obj_set_y(cui_ButtonSwitchSmall, -50);
    lv_obj_set_align(cui_ButtonSwitchSmall, LV_ALIGN_CENTER);
    lv_obj_add_flag(cui_ButtonSwitchSmall, LV_OBJ_FLAG_CHECKABLE);     /// Flags

    lv_obj_t * cui_LblPeer;
    cui_LblPeer = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblPeer, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblPeer, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblPeer, 0);
    lv_obj_set_y(cui_LblPeer, 10);
    lv_obj_set_align(cui_LblPeer, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblPeer, "Peer");
    lv_obj_set_style_text_color(cui_LblPeer, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_LblPeer, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_LblPeer, &lv_font_montserrat_10, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_LblPeriph;
    cui_LblPeriph = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblPeriph, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblPeriph, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblPeriph, 0);
    lv_obj_set_y(cui_LblPeriph, -13);
    lv_obj_set_align(cui_LblPeriph, LV_ALIGN_CENTER);
    lv_obj_set_style_text_color(cui_LblPeriph, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_LblPeriph, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_LblValue;
    cui_LblValue = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblValue, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblValue, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblValue, -20);
    lv_obj_set_y(cui_LblValue, 0);
    lv_obj_set_align(cui_LblValue, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblValue, "V");
    lv_obj_set_style_text_color(cui_LblValue, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_LblValue, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_LblPosition;
    cui_LblPosition = lv_label_create(cui_ButtonSwitchSmall);
    lv_obj_set_width(cui_LblPosition, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_LblPosition, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_LblPosition, 20);
    lv_obj_set_y(cui_LblPosition, 0);
    lv_obj_set_align(cui_LblPosition, LV_ALIGN_CENTER);
    lv_label_set_text(cui_LblPosition, "P");
    lv_obj_set_style_text_color(cui_LblPosition, lv_color_hex(0xDBDBDB), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_LblPosition, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_BUTTONSWITCHSMALL_NUM);
    children[UI_COMP_BUTTONSWITCHSMALL_BUTTONSWITCHSMALL] = cui_ButtonSwitchSmall;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPEER] = cui_LblPeer;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPERIPH] = cui_LblPeriph;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLVALUE] = cui_LblValue;
    children[UI_COMP_BUTTONSWITCHSMALL_LBLPOSITION] = cui_LblPosition;
    lv_obj_add_event_cb(cui_ButtonSwitchSmall, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_ButtonSwitchSmall, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_ButtonSwitchSmall_create_hook(cui_ButtonSwitchSmall);
    return cui_ButtonSwitchSmall;
}

