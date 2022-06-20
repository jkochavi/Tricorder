// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Tricorder

#ifndef _TRICORDER_UI_H
#define _TRICORDER_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_battery;
extern lv_obj_t * ui_keyboardbutton;
extern lv_obj_t * ui_filebutton;
extern lv_obj_t * ui_console;
extern lv_obj_t * ui_clear;
extern lv_obj_t * ui_macrobutton;
extern lv_obj_t * ui_sigchoice;
extern lv_obj_t * ui_character;
extern lv_obj_t * ui_keyboard;
extern lv_obj_t * ui_LCARS;
extern lv_obj_t * ui_back1;
extern lv_obj_t * ui_cmdbutton;
extern lv_obj_t * ui_sdcontents;
extern lv_obj_t * ui_macroconfig;
extern lv_obj_t * ui_cmdtextarea;
extern lv_obj_t * ui_cmdkeyboard;
extern lv_obj_t * ui_Macro;
extern lv_obj_t * ui_b1;
extern lv_obj_t * ui_b2;
extern lv_obj_t * ui_b3;
extern lv_obj_t * ui_b4;
extern lv_obj_t * ui_b5;
extern lv_obj_t * ui_b6;
extern lv_obj_t * ui_b7;
extern lv_obj_t * ui_b8;
extern lv_obj_t * ui_b9;
extern lv_obj_t * ui_back2;
extern lv_obj_t * ui_row1;
extern lv_obj_t * ui_row2;
extern lv_obj_t * ui_row3;

void clearconsoletext(lv_event_t * e);
void keypress(lv_event_t * e);
void execcmd(lv_event_t * e);

LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_halfbutton5_png);    // assets\halfbutton5.png
LV_IMG_DECLARE(ui_img_halfbutton2_png);    // assets\halfbutton2.png
LV_IMG_DECLARE(ui_img_halfbutton4_png);    // assets\halfbutton4.png
LV_IMG_DECLARE(ui_img_halfbutton3_png);    // assets\halfbutton3.png
LV_IMG_DECLARE(ui_img_lcars_png);    // assets\LCARS.png
LV_IMG_DECLARE(ui_img_halfbutton1_png);    // assets\halfbutton1.png
LV_IMG_DECLARE(ui_img_macro_png);    // assets\macro.png


LV_FONT_DECLARE(ui_font_Regular_Text);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
