/** @file sensorpack1.cpp
 * This file contains the custom functions related to an external sensor prototyping board, which contains
 * an MPU6050 accelerometer module and an MCP9808 temperature sensor module. These sensors are connected
 * to the main microcontroller board via I2C. The functions in this file are specific to this module. 
 * The greater programming scheme for this device is to maintain modularity between each sensor board.
 * @author Jordan Kochavi
 * @date June 19th, 2022
 */ 
#include "lvgl.h"                        // Graphics library
#include "GUI/ui.h"                      // Squareline-generate GUI files
#include "MPU6050.h"                     // Module for the accelerometer
#include "MCP9808.h"                     // Module for the temperature sensor
#include "I2Cdev.h"                      // I2C development library
#include "cppQueue.h"                    // Queue library

#define ROLL  "1"                        // Signal assignment
#define PITCH "2"                        // Signal assignment
#define YAW   "3"                        // Signal assignment
#define TEMP  "4"                        // Signal assignment
#define IMPLEMENTATION LIFO              // Queue: last in, first out 
#define WINDOW_LENGTH 50                 // Window length of plot

lv_obj_t * ui_sensorpack1;               // LVGL object for the background image
lv_obj_t * ui_sensorreadings1;           // LVGL object for the sensor readings
lv_obj_t * ui_Chart1;                    // LVGL object for the chart
lv_chart_series_t * ser1;                // Series object to link to the chart
MCP9808 temp_sensor;                     // Temp sensor instance
MPU6050 gyro_sensor;                     // Accelerometer instance     
cppQueue q(4, 10, IMPLEMENTATION, true); // Queue instance
float max_reading = 0;                   // Max sensor value on chart
float min_reading = 0;                   // Min sensor value on chart
LV_IMG_DECLARE(ui_img_sensorpack1_png);  // Create image object for the background image

/** @brief Function to initialize the GUI features related to Sensorpack 1.
 * @details This function is used to greate all the GUI elements related to 
 * Sensorpack 1. This includes a background image with descriptions of each
 * sensor reading (roll, pitch, and yaw angles, and ambient temperature),
 * a text edit field for displaying the actual sensor readings, and a chart
 * for plotting a measurement signal. 
 */
void init_sensorpackgui(){
    // ui_sensorpack1
    ui_sensorpack1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_sensorpack1, &ui_img_sensorpack1_png);
    lv_obj_set_width(ui_sensorpack1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_sensorpack1, LV_SIZE_CONTENT);
    lv_obj_set_x(ui_sensorpack1, 29);
    lv_obj_set_y(ui_sensorpack1, 124);
    lv_obj_add_flag(ui_sensorpack1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_sensorpack1, LV_OBJ_FLAG_SCROLLABLE);
    // ui_sensorreadings1
    ui_sensorreadings1 = lv_textarea_create(ui_Home);
    lv_obj_set_width(ui_sensorreadings1, 70);
    lv_obj_set_height(ui_sensorreadings1, 88);
    lv_obj_set_x(ui_sensorreadings1, 70);
    lv_obj_set_y(ui_sensorreadings1, 133);
    if("" == "") lv_textarea_set_accepted_chars(ui_sensorreadings1, NULL);
    else lv_textarea_set_accepted_chars(ui_sensorreadings1, "");
    lv_textarea_set_text(ui_sensorreadings1, "");
    lv_textarea_set_placeholder_text(ui_sensorreadings1, "");
    lv_obj_clear_flag(ui_sensorreadings1,
        LV_OBJ_FLAG_SCROLLABLE | LV_OBJ_FLAG_SCROLL_ELASTIC | LV_OBJ_FLAG_SCROLL_MOMENTUM | LV_OBJ_FLAG_SCROLL_CHAIN);
    lv_obj_set_style_text_color(ui_sensorreadings1, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_sensorreadings1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui_sensorreadings1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_sensorreadings1, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_sensorreadings1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_sensorreadings1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_sensorreadings1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_sensorreadings1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_sensorreadings1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    // ui_Chart1
    ui_Chart1 = lv_chart_create(ui_Home);
    lv_obj_set_width(ui_Chart1, 123);
    lv_obj_set_height(ui_Chart1, 80);
    lv_obj_set_x(ui_Chart1, 195);
    lv_obj_set_y(ui_Chart1, 50);
    lv_obj_set_style_radius(ui_Chart1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    ser1 = lv_chart_add_series(ui_Chart1,lv_color_make(255,238,139), LV_CHART_AXIS_PRIMARY_Y);
    lv_chart_set_update_mode(ui_Chart1,LV_CHART_UPDATE_MODE_SHIFT);    
    lv_chart_set_point_count(ui_Chart1,WINDOW_LENGTH);
    // Modify keyboard layer
    lv_obj_move_foreground(ui_keyboard);
}

/** @brief This function begins the I2C connection to both the accelerometer and temperature sensors.
 */
void begin_sensors(){
    // Temp sensor
    temp_sensor.begin();
    temp_sensor.tUpper = 25 * 4;
    temp_sensor.tLower = -10 * 4;
    temp_sensor.tCritical = 30 * 4;
    temp_sensor.write();
    // Gyro sensor
    gyro_sensor.initialize();
}

/** @brief Function to push the desired sensor reading to a queue.
 * @details Using the command prompt, the user can choose which
 * signal to display on the chart. Their choice of signal is stored in
 * an LVGL Label object on the home page. This function reads the value
 * stored in that label object, and pushes the appropriate signal
 * to the queue to be plotted later. 
 * @param th1 Float containing the roll angle measurement.
 * @param th2 Float containing the pitch angle measurement.
 * @param th3 Float containing the yaw angle measurement. 
 * @param temp Float containing the temperature measurement. 
 */
void push_to_queue(float th1, float th2, float th3, float temp){
    // Get the current signal choice from the label object
    const char * sig_choice = lv_label_get_text(ui_sigchoice);
    if (strcmp(sig_choice,ROLL) == 0){       // If the signal choice is roll...
        q.push(&th1);                        //     Push the roll measurement to the queue
    } 
    else if (strcmp(sig_choice,PITCH) == 0){ // If the signal choice is pitch...
        q.push(&th2);                        //     Push the pitch measurement to the queue
    }
    else if (strcmp(sig_choice,YAW) == 0){   // If the signal choice is yaw...
        q.push(&th3);                        //     Push the yaw measurement to the queue
    }
    else if (strcmp(sig_choice,TEMP) == 0){  // If the signal choice is temperature...
        q.push(&temp);                       //     Push the temperature measurement to the queue
    }
    // Otherwise, an invalid value exists in that label, so alert the command prompt
    else {
        lv_textarea_set_placeholder_text(ui_cmdtextarea,"> INVALID SIGNAL CHOICE");
    }
}

/** @brief Timer callback for reading the sensors.
 * @details This function is the callback for a timer object declared in the main script.
 * This callback reads both sensors and deposits their values in the text edit field in the GUI. 
 */
void read_sensors(lv_timer_t * timer){
    // Temp sensor
    temp_sensor.read();                                         // Read the temperature sensor
    float temp = 9.0*(temp_sensor.tAmbient / 16.0)/5.0 + 32.0;  // Convert to Fahrenheit
    // Gyro sensor
    int16_t ax, ay, az;                                         // Declare local variables
    gyro_sensor.getAcceleration(&ax, &ay, &az);                 // Get the acceleration measurements
    float th1 = atan2f(ay, ax)*180/3.14159265358979323846;      // Convert to angle 1
    float th2 = atan2f(ay, az)*180/3.14159265358979323846;      // Convert to angle 2
    float th3 = atan2f(az, ax)*180/3.14159265358979323846;      // Convert to angle 3
    // Update text
    lv_textarea_set_text(ui_sensorreadings1,"");
    lv_textarea_add_text(ui_sensorreadings1,
        ((String)th1).c_str());
    lv_textarea_add_text(ui_sensorreadings1,"\n");
    lv_textarea_add_text(ui_sensorreadings1,
        ((String)th2).c_str());
    lv_textarea_add_text(ui_sensorreadings1,"\n");
    lv_textarea_add_text(ui_sensorreadings1,
        ((String)th3).c_str());
    lv_textarea_add_text(ui_sensorreadings1,"\n");
    lv_textarea_add_text(ui_sensorreadings1,
        ((String)temp).c_str());
    // Push the appropriate signal to the queue
    push_to_queue(th1, th2, th3, temp);
}

/** @brief Timer callback for updating the chart.
 * @details This function pulls a measurement from the queue and adds it to the chart. 
 * The callback continuously checks for the maximum reading and adjusts the chart scales
 * appropriately. 
 */
void update_plot(lv_timer_t * timer)
{
    float reading;
    q.pull(&reading);
    if (reading > max_reading){max_reading = reading;}
    else if (reading < min_reading){min_reading = reading;}
    lv_chart_set_next_value(ui_Chart1,ser1,reading);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, min_reading, max_reading);
}

