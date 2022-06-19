/** @file cpp_timers.cpp
 * This file contains the callback functions for the various timers used in the interace, which 
 * are created in the main script. 
 * @author Jordan Kochavi
 * @date 19 June latest modification
 */
#include "lvgl.h"    // Graphics library
#include "GUI/ui.h"  // Squareline-generated files
#include "Arduino.h" // Access Arduino functions

#define batteryPin 35 // GPIO for reading the battery level

/** @brief Function obtain the current battery level, in percent remaining.
 * @details This function reads the GPIO attached the battery terminals. Using 
 * 3.3V logic and a 12-bit ADC, floating point arithmetic is used to calculate the
 * battery percentage remaining. The specifications for the battery used are published
 * by Adafruit. Based on their published voltage characteristics for the battery,
 * a linear curve was defined to map the battery voltage to a percentage between 
 * 0 and 100. This is currently only useful as a rough estimate of the battery's 
 * remaining capacity. Further testing is required to obtain a more precise 
 * measurement.
 * @return A float containing the battery percentage. 
 */ 
float batterylevel()
{
    float battery_level = analogRead(batteryPin);         // Raw ADC reading
    //lv_textarea_add_text(ui_console, 
    //    ((String)battery_level).c_str());               // Print ADC reading to console
    //lv_textarea_add_text(ui_console,"\n");              // Add new line to console
    battery_level *= 3.3/4096;                            // Convert to voltage
    battery_level = 166.67*battery_level-250;             // Convert to percentage
    if (battery_level > 100) {battery_level=100;}         // Saturate to 100%
    return battery_level;
}

/** @brief Callback function for reading the battery level.
 * @details This function updates the text field in the GUI to display
 * the current battery percentage. The function first calls batterylevel() to measure
 * the current charge, and then updates the text edit field.  
 */
void batterytimer(lv_timer_t * timer) 
{
    float battery_level = batterylevel();
    lv_label_set_text_fmt(ui_battery, "BATT %d%s", (int)battery_level, "%");
}

/** @brief Callback function to update the debug console.
 * @details A text edit field is included in the GUI to act as a debug console. This
 * widget can be accessed from any custom function for adding print statements. Periodically,
 * we need to check if the text edit field has been filled to capacity. If we don't flush
 * the edit field when this happens, new print statements will no longer be written to 
 * the edit field.
 */
void console_timer(lv_timer_t * timer)
{
    const char * text = lv_textarea_get_text(ui_console);         // Get the current text in the console
    if (sizeof(text) ==  lv_textarea_get_max_length(ui_console)){ // If the edit field is at capacity...
        lv_textarea_set_text(ui_console, "CLEAR CSL\n");          //    Clear the edit field
    }
}