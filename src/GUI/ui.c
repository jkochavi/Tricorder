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
lv_obj_t * ui_back2;
lv_obj_t * ui_keyboard;
lv_obj_t * ui_mouse;
lv_obj_t * ui_Keyboard1;
lv_obj_t * ui_character;
lv_obj_t * ui_btstatus;

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
static void ui_event_keyboard(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
    }
}
static void ui_event_Keyboard1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        keypress(e);
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

    // ui_keyboard

    ui_keyboard = lv_img_create(ui_Bluetooth);
    lv_img_set_src(ui_keyboard, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_keyboard, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_keyboard, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_keyboard, 36);
    lv_obj_set_y(ui_keyboard, 90);

    lv_obj_add_flag(ui_keyboard, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_keyboard, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_keyboard, ui_event_keyboard, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_keyboard, lv_color_hex(0x320032), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_keyboard, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_mouse

    ui_mouse = lv_img_create(ui_Bluetooth);
    lv_img_set_src(ui_mouse, &ui_img_fullbutton1_png);

    lv_obj_set_width(ui_mouse, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_mouse, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_mouse, 198);
    lv_obj_set_y(ui_mouse, 90);

    lv_obj_add_flag(ui_mouse, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_mouse, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_mouse, lv_color_hex(0x320032), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_mouse, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Keyboard1

    ui_Keyboard1 = lv_keyboard_create(ui_Bluetooth);

    lv_obj_set_width(ui_Keyboard1, 320);
    lv_obj_set_height(ui_Keyboard1, 130);

    lv_obj_set_x(ui_Keyboard1, 0);
    lv_obj_set_y(ui_Keyboard1, 55);

    lv_obj_set_align(ui_Keyboard1, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_Keyboard1, LV_OBJ_FLAG_HIDDEN);

    lv_obj_add_event_cb(ui_Keyboard1, ui_event_Keyboard1, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_Keyboard1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Keyboard1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_character

    ui_character = lv_textarea_create(ui_Bluetooth);

    lv_obj_set_width(ui_character, 150);
    lv_obj_set_height(ui_character, 70);

    lv_obj_set_x(ui_character, 12);
    lv_obj_set_y(ui_character, 33);

    lv_obj_set_align(ui_character, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_character, NULL);
    else lv_textarea_set_accepted_chars(ui_character, "");

    lv_textarea_set_max_length(ui_character, 5);
    lv_textarea_set_text(ui_character, "");
    lv_textarea_set_placeholder_text(ui_character, "Placeholder...");
    lv_textarea_set_one_line(ui_character, true);

    lv_obj_add_flag(ui_character, LV_OBJ_FLAG_HIDDEN);

    // ui_btstatus

    ui_btstatus = lv_label_create(ui_Bluetooth);

    lv_obj_set_width(ui_btstatus, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_btstatus, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_btstatus, 78);
    lv_obj_set_y(ui_btstatus, 43);

    lv_label_set_text(ui_btstatus, "BLUETOOTH OFF");

    lv_obj_set_style_text_color(ui_btstatus, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btstatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btstatus, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // POST CALLS
    lv_keyboard_set_textarea(ui_Keyboard1, ui_character);

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

