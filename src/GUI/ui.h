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
extern lv_obj_t * ui_bluetoothbutton;
extern lv_obj_t * ui_filebutton;
extern lv_obj_t * ui_chartbutton;
extern lv_obj_t * ui_b1;
extern lv_obj_t * ui_b2;
extern lv_obj_t * ui_b3;
extern lv_obj_t * ui_b4;
extern lv_obj_t * ui_b5;
extern lv_obj_t * ui_b6;
extern lv_obj_t * ui_Chart1;
extern lv_obj_t * ui_console;
extern lv_obj_t * ui_clear;
extern lv_obj_t * ui_LCARS;
extern lv_obj_t * ui_back1;
extern lv_obj_t * ui_Bluetooth;
extern lv_obj_t * ui_back2;
extern lv_obj_t * ui_keyboard;
extern lv_obj_t * ui_mouse;
extern lv_obj_t * ui_Keyboard1;
extern lv_obj_t * ui_character;
extern lv_obj_t * ui_btstatus;

void clearconsoletext(lv_event_t * e);
void keypress(lv_event_t * e);

LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_halfbutton5_png);    // assets\halfbutton5.png
LV_IMG_DECLARE(ui_img_halfbutton2_png);    // assets\halfbutton2.png
LV_IMG_DECLARE(ui_img_halfbutton3_png);    // assets\halfbutton3.png
LV_IMG_DECLARE(ui_img_fullbutton1_png);    // assets\fullbutton1.png
LV_IMG_DECLARE(ui_img_halfbutton4_png);    // assets\halfbutton4.png
LV_IMG_DECLARE(ui_img_lcars_png);    // assets\LCARS.png
LV_IMG_DECLARE(ui_img_bluetoothscreen_png);    // assets\bluetoothscreen.png


LV_FONT_DECLARE(ui_font_Regular_Text);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
