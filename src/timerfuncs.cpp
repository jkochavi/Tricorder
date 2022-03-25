#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"

#define batteryPin 35 // GPIO for reading the battery level

float batterylevel()
{
    float battery_level = analogRead(batteryPin);
    battery_level *= 2;
    battery_level *= 3.3;
    battery_level /= 1024;
    return battery_level;
}

void batterytimer(lv_timer_t * timer) 
{
    float battery_level = batterylevel();
    lv_label_set_text_fmt(ui_Battery, "BATT %d%s", (int)battery_level, "%");
}

lv_obj_t * chooseSquare(uint8_t randnum)
{
    lv_obj_t * returnSq = ui_Square1;
    if (randnum == 1) {returnSq = ui_Square2;}
    else if (randnum == 2) {returnSq = ui_Square3;}
    else if (randnum == 3) {returnSq = ui_Square4;}
    else if (randnum == 4) {returnSq = ui_Square5;}
    else if (randnum == 5) {returnSq = ui_Square6;}
    else if (randnum == 6) {returnSq = ui_Square7;}
    else if (randnum == 7) {returnSq = ui_Square8;}
    else if (randnum == 8) {returnSq = ui_Square9;}
    else if (randnum == 9) {returnSq = ui_Square10;}
    else if (randnum == 10) {returnSq = ui_Square11;}
    else if (randnum == 11) {returnSq = ui_Square12;}
    else if (randnum == 12) {returnSq = ui_Square13;}
    else if (randnum == 13) {returnSq = ui_Square14;}
    else if (randnum == 14) {returnSq = ui_Square15;}
    return returnSq;   
}

const lv_img_dsc_t chooseImage(uint8_t randnum)
{
    lv_img_dsc_t returnIm = ui_img_square1_png;
    if (randnum == 1) {returnIm = ui_img_square2_png;}
    else if (randnum == 2) {returnIm = ui_img_square3_png;}
    else if (randnum == 3) {returnIm = ui_img_square4_png;}
    else {returnIm = ui_img_square1_png;}
    return returnIm;
}

void squarestimer(lv_timer_t * timer)
{
    uint8_t sq = random(0,14);
    uint8_t num = random(0,4);
    lv_obj_t * square = chooseSquare(sq);
    if (!num) {lv_img_set_src(square, &ui_img_square1_png);}
    else if (num==1) {lv_img_set_src(square, &ui_img_square2_png);}
    else if (num==2) {lv_img_set_src(square, &ui_img_square3_png);}
    else if (num==3) {lv_img_set_src(square, &ui_img_square4_png);}
}