#include "lvgl.h"
#include "GUI/ui.h"
#include "MPU6050.h"
#include "MCP9808.h"
#include "I2Cdev.h"
#include "cppQueue.h"
#include "sensorpack1.h"

#define addr_MCP9808 0x18
#define addr_MPU6050 0x68
#define ROLL  "1"
#define PITCH "2"
#define YAW   "3"
#define TEMP  "4"
#define IMPLEMENTATION LIFO
#define WINDOW_LENGTH 50

lv_obj_t * ui_sensorpack1;
lv_obj_t * ui_sensorreadings1;
lv_obj_t * ui_Chart1;
lv_chart_series_t * ser1;
MCP9808 temp_sensor;
MPU6050 gyro_sensor;
cppQueue q(4, 10, IMPLEMENTATION, true);	// Instantiate queue
float max_reading = 0;
float min_reading = 0;

LV_IMG_DECLARE(ui_img_sensorpack1_png);

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
    lv_obj_set_width(ui_sensorreadings1, 100);
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

void push_to_queue(float th1, float th2, float th3, float temp){
    const char * sig_choice = lv_label_get_text(ui_sigchoice);
    if (strcmp(sig_choice,ROLL) == 0){
        q.push(&th1);
    }
    else if (strcmp(sig_choice,PITCH) == 0){
        q.push(&th2);
    }
    else if (strcmp(sig_choice,YAW) == 0){
        q.push(&th3);
    }
    else if (strcmp(sig_choice,TEMP) == 0){
        q.push(&temp);
    }
}

void read_sensors(lv_timer_t * timer){
    // Temp sensor
    int16_t ax, ay, az;
    temp_sensor.read();
    float temp = 9.0*(temp_sensor.tAmbient / 16.0)/5.0 + 32.0;
    // Gyro sensor
    gyro_sensor.getAcceleration(&ax, &ay, &az);
    float th1 = atan2f(ay, ax)*180/3.14159265358979323846;
    float th2 = atan2f(ay, az)*180/3.14159265358979323846;
    float th3 = atan2f(az, ax)*180/3.14159265358979323846;
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
    push_to_queue(th1, th2, th3, temp);
}

void update_plot(lv_timer_t * timer)
{
    float reading;
    q.pull(&reading);
    if (reading > max_reading){max_reading = reading;}
    else if (reading < min_reading){min_reading = reading;}
    lv_chart_set_next_value(ui_Chart1,ser1,reading);
    lv_chart_set_range(ui_Chart1, LV_CHART_AXIS_PRIMARY_Y, min_reading, max_reading);
}

