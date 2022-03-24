#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"

uint8_t test = 0;

void batterytimer(lv_timer_t * timer) 
{
    lv_label_set_text_fmt(ui_Battery, "%d", test);
    test ++;
    if (test>100){test=0;}
}