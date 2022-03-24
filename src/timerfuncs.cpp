#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"

#define batteryPin 35 // GPIO for reading the battery level

lv_obj_t * squaresArray = (ui_Square1,ui_Square2,ui_Square3,ui_Square4,ui_Square5,ui_Square6,
ui_Square7,ui_Square8,ui_Square9,ui_Square10,ui_Square11,ui_Square12,ui_Square13,
ui_Square14,ui_Square15);

const lv_img_dsc_t imageArray = (ui_img_square1_png,ui_img_square2_png,
ui_img_square3_png,ui_img_square4_png);

void batterytimer(lv_timer_t * timer) 
{
    float battery_level = analogRead(batteryPin);
    battery_level *= 2;
    battery_level *= 3.3;
    battery_level /= 1024;
    lv_label_set_text_fmt(ui_Battery, "BATT %d%s", (int)battery_level, "%");
}

const lv_img_dsc_t chooseSquare(uint8_t randnum)
{
    const lv_img_dsc_t imC = ui_img_square1_png;
    if (randnum == 1) {const lv_img_dsc_t imC = ui_img_square2_png;}
    else if (randnum == 2) {const lv_img_dsc_t imC = ui_img_square3_png;}
    else if (randnum == 3) {const lv_img_dsc_t imC = ui_img_square4_png;}
    return imC;
}

void squarestimer(lv_timer_t * timer)
{
    // Choose random squares
    uint8_t sq1 = random(0,14);
    uint8_t sq2 = random(0,14); while (sq2==sq1) {sq2 = random(0,14);}
    uint8_t sq3 = random(0,14); while (sq3==sq1 || sq3==sq2) {sq3 = random(0,14);}

    // Choose random images
    const lv_img_dsc_t im1 = chooseSquare(random(0,3));
    const lv_img_dsc_t im2 = chooseSquare(random(0,3));
    const lv_img_dsc_t im3 = chooseSquare(random(0,3));

    lv_img_set_src(&squaresArray[sq1], &im1);
    lv_img_set_src(&squaresArray[sq2], &im2);
    lv_img_set_src(&squaresArray[sq3], &im3);
}