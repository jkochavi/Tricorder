#include "lvgl.h"
#include "GUI/ui.h"
#include "Arduino.h"

#define batteryPin 35 // GPIO for reading the battery level

float batterylevel()
{
    float battery_level = analogRead(batteryPin); // Raw voltage reading
    battery_level *= 2;                           // Account for voltage divider
    battery_level /= 4096;                        // Ratio wrt max ADC counts
    battery_level *= 100;                         // Convert to percentage
    if (battery_level > 100) {battery_level=100;} // Saturate
    return battery_level;
}

void batterytimer(lv_timer_t * timer) 
{
    float battery_level = batterylevel();
    lv_label_set_text_fmt(ui_battery, "BATT %d%s", (int)battery_level, "%");
}

