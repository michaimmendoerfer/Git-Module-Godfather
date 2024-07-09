#ifndef _UI_COMP_BUTTONSWITCHSMALL_H
#define _UI_COMP_BUTTONSWITCHSMALL_H

#include "../ui.h"

#ifdef __cplusplus
extern "C" {
#endif

// COMPONENT ButtonSwitchSmall
#define UI_COMP_BUTTONSWITCHSMALL_BUTTONSWITCHSMALL 0
#define UI_COMP_BUTTONSWITCHSMALL_LBLPEER 1
#define UI_COMP_BUTTONSWITCHSMALL_LBLPERIPH 2
#define UI_COMP_BUTTONSWITCHSMALL_LBLVALUE 3
#define UI_COMP_BUTTONSWITCHSMALL_LBLPOSITION 4
#define UI_COMP_BUTTONSWITCHSMALL_SPINNER 5
#define _UI_COMP_BUTTONSWITCHSMALL_NUM 6

lv_obj_t * ui_ButtonSwitchSmall_create(lv_obj_t * comp_parent, int x, int y, int Pos, char* PeerName, char *PeriphName);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
