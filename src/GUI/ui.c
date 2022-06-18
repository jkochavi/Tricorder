// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Tricorder

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_battery;
lv_obj_t * ui_keyboardbutton;
lv_obj_t * ui_filebutton;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_console;
lv_obj_t * ui_clear;
lv_obj_t * ui_logswitch;
lv_obj_t * ui_character;
lv_obj_t * ui_keyboard;
lv_obj_t * ui_signalchoice;
lv_obj_t * ui_LCARS;
lv_obj_t * ui_back1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_keyboardbutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
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
static void ui_event_keyboard(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        keypress(e);
    }
    if(event == LV_EVENT_CANCEL) {
        _ui_flag_modify(ui_keyboard, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_TOGGLE);
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

    // ui_keyboardbutton

    ui_keyboardbutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_keyboardbutton, &ui_img_halfbutton5_png);

    lv_obj_set_width(ui_keyboardbutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_keyboardbutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_keyboardbutton, 32);
    lv_obj_set_y(ui_keyboardbutton, 64);

    lv_obj_add_flag(ui_keyboardbutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_keyboardbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_keyboardbutton, ui_event_keyboardbutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_keyboardbutton, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_keyboardbutton, 150, LV_PART_MAIN | LV_STATE_PRESSED);

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

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_Home);

    lv_obj_set_width(ui_Chart1, 123);
    lv_obj_set_height(ui_Chart1, 80);

    lv_obj_set_x(ui_Chart1, 195);
    lv_obj_set_y(ui_Chart1, 50);

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

    lv_obj_set_x(ui_clear, 275);
    lv_obj_set_y(ui_clear, 134);

    lv_obj_add_flag(ui_clear, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_clear, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_clear, ui_event_clear, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_clear, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_clear, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_logswitch

    ui_logswitch = lv_switch_create(ui_Home);

    lv_obj_set_width(ui_logswitch, 41);
    lv_obj_set_height(ui_logswitch, 16);

    lv_obj_set_x(ui_logswitch, 32);
    lv_obj_set_y(ui_logswitch, 106);

    lv_obj_set_style_radius(ui_logswitch, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_logswitch, lv_color_hex(0x101648), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_logswitch, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_logswitch, lv_color_hex(0xFFEE8B), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_logswitch, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    // ui_character

    ui_character = lv_textarea_create(ui_Home);

    lv_obj_set_width(ui_character, 320);
    lv_obj_set_height(ui_character, 40);

    lv_obj_set_x(ui_character, 0);
    lv_obj_set_y(ui_character, -100);

    lv_obj_set_align(ui_character, LV_ALIGN_CENTER);

    if("" == "") lv_textarea_set_accepted_chars(ui_character, NULL);
    else lv_textarea_set_accepted_chars(ui_character, "");

    lv_textarea_set_max_length(ui_character, 1);
    lv_textarea_set_text(ui_character, "");
    lv_textarea_set_placeholder_text(ui_character, "ENTER TEXT...");
    lv_textarea_set_one_line(ui_character, true);

    lv_obj_add_flag(ui_character, LV_OBJ_FLAG_HIDDEN);

    lv_obj_set_style_text_color(ui_character, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_character, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_character, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_character, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_character, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_character, lv_color_hex(0xFFEE8B), LV_PART_SELECTED | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_character, 255, LV_PART_SELECTED | LV_STATE_DEFAULT);

    lv_obj_set_style_text_color(ui_character, lv_color_hex(0xFFEE8B), LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_character, 255, LV_PART_TEXTAREA_PLACEHOLDER | LV_STATE_DEFAULT);

    // ui_keyboard

    ui_keyboard = lv_keyboard_create(ui_Home);

    lv_obj_set_width(ui_keyboard, 320);
    lv_obj_set_height(ui_keyboard, 240);

    lv_obj_set_x(ui_keyboard, 0);
    lv_obj_set_y(ui_keyboard, 0);

    lv_obj_set_align(ui_keyboard, LV_ALIGN_CENTER);

    lv_obj_add_flag(ui_keyboard, LV_OBJ_FLAG_HIDDEN);

    lv_obj_add_event_cb(ui_keyboard, ui_event_keyboard, LV_EVENT_ALL, NULL);
    lv_obj_set_style_bg_color(ui_keyboard, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_keyboard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_signalchoice

    ui_signalchoice = lv_label_create(ui_Home);

    lv_obj_set_width(ui_signalchoice, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_signalchoice, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_signalchoice, 240);
    lv_obj_set_y(ui_signalchoice, 30);

    lv_label_set_text(ui_signalchoice, "1");

    lv_obj_set_style_text_color(ui_signalchoice, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_signalchoice, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_signalchoice, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // POST CALLS
    lv_keyboard_set_textarea(ui_keyboard, ui_character);

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

void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    ui_LCARS_screen_init();
    lv_disp_load_scr(ui_Home);
}

