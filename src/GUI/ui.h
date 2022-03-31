// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Tricorder2

#ifndef _TRICORDER2_UI_H
#define _TRICORDER2_UI_H

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
extern lv_obj_t * ui_wifibutton;
extern lv_obj_t * ui_btbutton;
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
extern lv_obj_t * ui_wifisetup;
extern lv_obj_t * ui_wifiback;
extern lv_obj_t * ui_wifioptions;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_password;
extern lv_obj_t * ui_wifikeyboard;

void OptionsPanelSmall(lv_event_t * e);
void wificonnect(lv_event_t * e);
void OptionsPanelBig(lv_event_t * e);

LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_halfbutton1_png);    // assets\halfbutton1.png
LV_IMG_DECLARE(ui_img_halfbutton4_png);    // assets\halfbutton4.png
LV_IMG_DECLARE(ui_img_halfbutton2_png);    // assets\halfbutton2.png
LV_IMG_DECLARE(ui_img_halfbutton3_png);    // assets\halfbutton3.png
LV_IMG_DECLARE(ui_img_fullbutton1_png);    // assets\fullbutton1.png
LV_IMG_DECLARE(ui_img_wifiscreen_png);    // assets\wifiscreen.png


LV_FONT_DECLARE(ui_font_Regular_Text);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
