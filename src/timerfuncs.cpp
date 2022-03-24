#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"
#include "timerfuncs.h"

void batterytimer(lv_timer_t * timer) 
{
    float battery_level = analogRead(batteryPin);
    battery_level *= 2;
    battery_level *= 3.3;
    battery_level /= 1024;
    lv_label_set_text_fmt(ui_Battery, "BATT %d%s", (int)battery_level, "%");
}