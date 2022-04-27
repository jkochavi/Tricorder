#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"

#define batteryPin 35 // GPIO for reading the battery level

float batterylevel()
{
    float battery_level = analogRead(batteryPin); // Raw ADC reading
    battery_level *= 3.3/4096;                    // Convert to voltage
    battery_level = 166.67*battery_level-250;     // Convert to percentage
    if (battery_level > 100) {battery_level=100;} // Saturate
    return battery_level;
}

void batterytimer(lv_timer_t * timer) 
{
    float battery_level = batterylevel();
    lv_label_set_text_fmt(ui_battery, "BATT %d%s", (int)battery_level, "%");
}

