// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.4
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
extern lv_obj_t * ui_Square1;
extern lv_obj_t * ui_Square2;
extern lv_obj_t * ui_Square3;
extern lv_obj_t * ui_Square4;
extern lv_obj_t * ui_Square5;
extern lv_obj_t * ui_Square6;
extern lv_obj_t * ui_Square7;
extern lv_obj_t * ui_Square8;
extern lv_obj_t * ui_Square9;
extern lv_obj_t * ui_Square10;
extern lv_obj_t * ui_Square11;
extern lv_obj_t * ui_Square12;
extern lv_obj_t * ui_Square13;
extern lv_obj_t * ui_Square14;
extern lv_obj_t * ui_Square15;
extern lv_obj_t * ui_Battery;
extern lv_obj_t * ui_Status;
extern lv_obj_t * ui_WIFIstatus;
extern lv_obj_t * ui_BTstatus;
extern lv_obj_t * ui_Chart1;
extern lv_obj_t * ui_console;
extern lv_obj_t * ui_coms;
extern lv_obj_t * ui_settings;
extern lv_obj_t * ui_lcars;
extern lv_obj_t * ui_Round1;
extern lv_obj_t * ui_Round2;
extern lv_obj_t * ui_Round3;
extern lv_obj_t * ui_Round4;
extern lv_obj_t * ui_Round5;
extern lv_obj_t * ui_Round6;
extern lv_obj_t * ui_Round7;
extern lv_obj_t * ui_Round8;
extern lv_obj_t * ui_Round9;
extern lv_obj_t * ui_Round10;
extern lv_obj_t * ui_Round11;
extern lv_obj_t * ui_Round12;
extern lv_obj_t * ui_Round13;
extern lv_obj_t * ui_Round14;
extern lv_obj_t * ui_Round15;
extern lv_obj_t * ui_Round16;

void updatechart(lv_event_t * e);

LV_IMG_DECLARE(ui_img_home_png);    // assets\home.png
LV_IMG_DECLARE(ui_img_square1_png);    // assets\square1.png
LV_IMG_DECLARE(ui_img_square2_png);    // assets\square2.png
LV_IMG_DECLARE(ui_img_square4_png);    // assets\square4.png
LV_IMG_DECLARE(ui_img_square3_png);    // assets\square3.png
LV_IMG_DECLARE(ui_img_round_button_png);    // assets\round_button.png
LV_IMG_DECLARE(ui_img_round2_png);    // assets\round2.png
LV_IMG_DECLARE(ui_img_round3_png);    // assets\round3.png
LV_IMG_DECLARE(ui_img_round4_png);    // assets\round4.png


LV_FONT_DECLARE(ui_font_Regular_Text);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
