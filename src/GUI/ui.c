// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Tricorder

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_battery;
lv_obj_t * ui_bluetoothbutton;
lv_obj_t * ui_filebutton;
lv_obj_t * ui_chartbutton;
lv_obj_t * ui_b1;
lv_obj_t * ui_b2;
lv_obj_t * ui_b3;
lv_obj_t * ui_b4;
lv_obj_t * ui_b5;
lv_obj_t * ui_b6;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_console;
lv_obj_t * ui_clear;
lv_obj_t * ui_LCARS;
lv_obj_t * ui_back1;
lv_obj_t * ui_Bluetooth;
lv_obj_t * ui_bluetoothroller;
lv_obj_t * ui_back2;
lv_obj_t * ui_bluetoothconnect;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_bluetoothbutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Bluetooth, LV_SCR_LOAD_ANIM_FADE_ON, 10, 0);
    }
}
static void ui_event_filebutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_LCARS, LV_SCR_LOAD_ANIM_FADE_ON, 10, 0);
    }
}
static void ui_event_clear(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        clearconsoletext(e);
    }
}
static void ui_event_back1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 10, 0);
    }
}
static void ui_event_back2(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Home, LV_SCR_LOAD_ANIM_FADE_ON, 10, 0);
    }
}
static void ui_event_bluetoothconnect(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        btconnect(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Home_screen_init(void)
{

    // ui_Home

    ui_Home = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_Home, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_battery

    ui_battery = lv_label_create(ui_Home);

    lv_obj_set_width(ui_battery, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_battery, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_battery, 32);
    lv_obj_set_y(ui_battery, 19);

    lv_label_set_text(ui_battery, "INIT BATT");

    lv_obj_set_style_text_color(ui_battery, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_battery, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_bluetoothbutton

    ui_bluetoothbutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_bluetoothbutton, &ui_img_halfbutton5_png);

    lv_obj_set_width(ui_bluetoothbutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_bluetoothbutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_bluetoothbutton, 32);
    lv_obj_set_y(ui_bluetoothbutton, 64);

    lv_obj_add_flag(ui_bluetoothbutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_bluetoothbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_bluetoothbutton, ui_event_bluetoothbutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_bluetoothbutton, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_bluetoothbutton, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_filebutton

    ui_filebutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_filebutton, &ui_img_halfbutton2_png);

    lv_obj_set_width(ui_filebutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_filebutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_filebutton, 32);
    lv_obj_set_y(ui_filebutton, 85);

    lv_obj_add_flag(ui_filebutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_filebutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_filebutton, ui_event_filebutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_filebutton, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_filebutton, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_chartbutton

    ui_chartbutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_chartbutton, &ui_img_halfbutton3_png);

    lv_obj_set_width(ui_chartbutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_chartbutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_chartbutton, 32);
    lv_obj_set_y(ui_chartbutton, 106);

    lv_obj_add_flag(ui_chartbutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_chartbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_chartbutton, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_chartbutton, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b1

    ui_b1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b1, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b1, 32);
    lv_obj_set_y(ui_b1, 164);

    lv_obj_add_flag(ui_b1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b1, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b1, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b2

    ui_b2 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b2, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b2, 32);
    lv_obj_set_y(ui_b2, 184);

    lv_obj_add_flag(ui_b2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b2, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b2, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b3

    ui_b3 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b3, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b3, 32);
    lv_obj_set_y(ui_b3, 204);

    lv_obj_add_flag(ui_b3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b3, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b4

    ui_b4 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b4, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b4, 106);
    lv_obj_set_y(ui_b4, 164);

    lv_obj_add_flag(ui_b4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b4, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b4, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b5

    ui_b5 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b5, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b5, 106);
    lv_obj_set_y(ui_b5, 184);

    lv_obj_add_flag(ui_b5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b5, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b5, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_b6

    ui_b6 = lv_img_create(ui_Home);
    lv_img_set_src(ui_b6, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_b6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_b6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_b6, 106);
    lv_obj_set_y(ui_b6, 204);

    lv_obj_add_flag(ui_b6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_b6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_b6, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_b6, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_Home);

    lv_obj_set_width(ui_Chart1, 123);
    lv_obj_set_height(ui_Chart1, 100);

    lv_obj_set_x(ui_Chart1, 195);
    lv_obj_set_y(ui_Chart1, 30);

    lv_obj_set_style_radius(ui_Chart1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_console

    ui_console = lv_textarea_create(ui_Home);

    lv_obj_set_width(ui_console, 123);
    lv_obj_set_height(ui_console, 55);

    lv_obj_set_x(ui_console, 195);
    lv_obj_set_y(ui_console, 155);

    if("" == "") lv_textarea_set_accepted_chars(ui_console, NULL);
    else lv_textarea_set_accepted_chars(ui_console, "");

    lv_textarea_set_text(ui_console, "");
    lv_textarea_set_placeholder_text(ui_console, "");

    lv_obj_clear_flag(ui_console, LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_GESTURE_BUBBLE |
                      LV_OBJ_FLAG_SNAPPABLE);

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_console, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_console, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_console, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_console, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_console, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_console, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_console, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_console, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_console, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_console, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_CURSOR | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_CURSOR | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_console, &ui_font_Regular_Text, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    // ui_clear

    ui_clear = lv_img_create(ui_Home);
    lv_img_set_src(ui_clear, &ui_img_halfbutton4_png);

    lv_obj_set_width(ui_clear, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_clear, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_clear, 250);
    lv_obj_set_y(ui_clear, 134);

    lv_obj_add_flag(ui_clear, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_clear, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_clear, ui_event_clear, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_clear, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_clear, 150, LV_PART_MAIN | LV_STATE_PRESSED);

}
void ui_LCARS_screen_init(void)
{

    // ui_LCARS

    ui_LCARS = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_LCARS, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_LCARS, &ui_img_lcars_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_back1

    ui_back1 = lv_img_create(ui_LCARS);
    lv_img_set_src(ui_back1, &ui_img_halfbutton4_png);

    lv_obj_set_width(ui_back1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back1, 275);
    lv_obj_set_y(ui_back1, 20);

    lv_obj_add_flag(ui_back1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back1, ui_event_back1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back1, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_back1, 150, LV_PART_MAIN | LV_STATE_PRESSED);

}
void ui_Bluetooth_screen_init(void)
{

    // ui_Bluetooth

    ui_Bluetooth = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Bluetooth, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_Bluetooth, &ui_img_bluetoothscreen_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_bluetoothroller

    ui_bluetoothroller = lv_roller_create(ui_Bluetooth);
    lv_roller_set_options(ui_bluetoothroller, "Option 1\nOption 2\nOption 3", LV_ROLLER_MODE_NORMAL);

    lv_obj_set_width(ui_bluetoothroller, 278);
    lv_obj_set_height(ui_bluetoothroller, 110);

    lv_obj_set_x(ui_bluetoothroller, 36);
    lv_obj_set_y(ui_bluetoothroller, 87);

    lv_obj_set_style_text_color(ui_bluetoothroller, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothroller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothroller, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_bluetoothroller, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothroller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothroller, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_bluetoothroller, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_bluetoothroller, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_bluetoothroller, lv_color_hex(0x000000), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_bluetoothroller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_bluetoothroller, &ui_font_Regular_Text, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui_bluetoothroller, 20, LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_bluetoothroller, lv_color_hex(0x626DCD), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_bluetoothroller, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    // ui_back2

    ui_back2 = lv_img_create(ui_Bluetooth);
    lv_img_set_src(ui_back2, &ui_img_halfbutton4_png);

    lv_obj_set_width(ui_back2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_back2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_back2, 273);
    lv_obj_set_y(ui_back2, 21);

    lv_obj_add_flag(ui_back2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_back2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_back2, ui_event_back2, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_back2, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_back2, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_bluetoothconnect

    ui_bluetoothconnect = lv_img_create(ui_Bluetooth);
    lv_img_set_src(ui_bluetoothconnect, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_bluetoothconnect, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_bluetoothconnect, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_bluetoothconnect, 248);
    lv_obj_set_y(ui_bluetoothconnect, 45);

    lv_obj_add_flag(ui_bluetoothconnect, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_bluetoothconnect, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_bluetoothconnect, ui_event_bluetoothconnect, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_bluetoothconnect, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_bluetoothconnect, 150, LV_PART_MAIN | LV_STATE_PRESSED);

}

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    ui_LCARS_screen_init();
    ui_Bluetooth_screen_init();
    lv_disp_load_scr(ui_Home);
}

