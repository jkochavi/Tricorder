// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.5
// LVGL VERSION: 8.2
// PROJECT: Tricorder2

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_battery;
lv_obj_t * ui_btbutton;
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
lv_obj_t * ui_Button1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
static void ui_event_btbutton(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
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

    // ui_btbutton

    ui_btbutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_btbutton, &ui_img_halfbutton4_png);

    lv_obj_set_width(ui_btbutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_btbutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_btbutton, 132);
    lv_obj_set_y(ui_btbutton, 62);

    lv_obj_add_flag(ui_btbutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_btbutton, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_add_event_cb(ui_btbutton, ui_event_btbutton, LV_EVENT_ALL, NULL);
    lv_obj_set_style_img_recolor(ui_btbutton, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_btbutton, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_filebutton

    ui_filebutton = lv_img_create(ui_Home);
    lv_img_set_src(ui_filebutton, &ui_img_halfbutton2_png);

    lv_obj_set_width(ui_filebutton, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_filebutton, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_filebutton, 32);
    lv_obj_set_y(ui_filebutton, 86);

    lv_obj_add_flag(ui_filebutton, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_filebutton, LV_OBJ_FLAG_SCROLLABLE);

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

    ui_console = lv_label_create(ui_Home);

    lv_obj_set_width(ui_console, 123);
    lv_obj_set_height(ui_console, 55);

    lv_obj_set_x(ui_console, 195);
    lv_obj_set_y(ui_console, 155);

    lv_label_set_long_mode(ui_console, LV_LABEL_LONG_SCROLL_CIRCULAR);
    lv_label_set_text(ui_console, "INIT CONSOLE");

    lv_obj_clear_flag(ui_console, LV_OBJ_FLAG_SCROLL_CHAIN);

    lv_obj_set_scroll_dir(ui_console, LV_DIR_VER);

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_console, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

}
void ui_init(void)
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Home_screen_init();
    lv_disp_load_scr(ui_Home);
}

