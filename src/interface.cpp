#include "lvgl.h"
#include "interface.h"

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t * scr;                  // Screen object
static lv_obj_t * coms_button;          // Communications button object
static lv_obj_t * settings_button;      // Settings button object
static lv_obj_t * telemetry_button;     // Telemetry button object
static lv_obj_t * sensors_button;       // Sensors button object
static lv_style_t gold_button_style;
static lv_style_t gold_button_pressed_style;
static lv_style_t pink1_button_style;
static lv_style_t pink1_button_pressed_style;

void add_gold_button(lv_obj_t * btn, char * label_text, int x, int y)
{
    lv_style_init(&gold_button_style); 
    lv_style_set_radius(&gold_button_style, 30);
    lv_style_set_bg_opa(&gold_button_style, LV_OPA_100); 
    lv_style_set_bg_color(&gold_button_style, lv_color_LCARS_gold()); 
    lv_style_set_text_color(&gold_button_style, lv_color_black()); 
    lv_style_set_pad_all(&gold_button_style, 10); 
    lv_style_init(&gold_button_pressed_style); 
    lv_style_set_outline_width(&gold_button_pressed_style, 30); 
    lv_style_set_outline_opa(&gold_button_pressed_style, LV_OPA_TRANSP); 
    lv_style_set_translate_y(&gold_button_pressed_style, 5); 
    lv_style_set_bg_color(&gold_button_pressed_style, lv_color_darken(lv_color_LCARS_gold(), 127)); 
    static lv_style_transition_dsc_t trans;
    static lv_style_prop_t props[] = {LV_STYLE_OUTLINE_WIDTH, LV_STYLE_OUTLINE_OPA, (lv_style_prop_t)0};
    lv_style_transition_dsc_init(&trans, props, lv_anim_path_linear, 300, 0, NULL);
    lv_style_set_transition(&gold_button_pressed_style, &trans); 
    lv_obj_remove_style_all(btn);   
    lv_obj_add_style(btn, &gold_button_style, LV_STATE_DEFAULT);
    lv_obj_add_style(btn, &gold_button_pressed_style, LV_STATE_PRESSED);
    lv_obj_set_size(btn, 100, 40);
    lv_obj_set_x(btn, x);
    lv_obj_set_y(btn, y);
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, label_text);
    lv_obj_center(label);
}

void add_pink1_button(lv_obj_t * btn, char * label_text, int x, int y)
{
    lv_style_init(&pink1_button_style); 
    lv_style_set_radius(&pink1_button_style, 30);
    lv_style_set_bg_opa(&pink1_button_style, LV_OPA_100); 
    lv_style_set_bg_color(&pink1_button_style, lv_color_LCARS_pink_var1()); 
    lv_style_set_text_color(&pink1_button_style, lv_color_black()); 
    lv_style_set_pad_all(&pink1_button_style, 10); 
    lv_style_init(&pink1_button_pressed_style); 
    lv_style_set_outline_width(&pink1_button_pressed_style, 30); 
    lv_style_set_outline_opa(&pink1_button_pressed_style, LV_OPA_TRANSP); 
    lv_style_set_translate_y(&pink1_button_pressed_style, 5); 
    lv_style_set_bg_color(&pink1_button_pressed_style, lv_color_darken(lv_color_LCARS_pink_var1(), 127)); 
    static lv_style_transition_dsc_t trans;
    static lv_style_prop_t props[] = {LV_STYLE_OUTLINE_WIDTH, LV_STYLE_OUTLINE_OPA, (lv_style_prop_t)0};
    lv_style_transition_dsc_init(&trans, props, lv_anim_path_linear, 300, 0, NULL);
    lv_style_set_transition(&pink1_button_pressed_style, &trans); 
    lv_obj_remove_style_all(btn);   
    lv_obj_add_style(btn, &pink1_button_style, LV_STATE_DEFAULT);
    lv_obj_add_style(btn, &pink1_button_pressed_style, LV_STATE_PRESSED);
    lv_obj_set_size(btn, 100, 40);
    lv_obj_set_x(btn, x);
    lv_obj_set_y(btn, y);
    lv_obj_t * label = lv_label_create(btn);
    lv_label_set_text(label, label_text);
    lv_obj_center(label);
}

void LCARS_bg(lv_obj_t * scr)
{
    LV_IMG_DECLARE(homepage);
    lv_obj_t * img1 = lv_img_create(scr);
    lv_img_set_src(img1, &homepage);
    lv_obj_set_size(img1, 320, 240);
}


void interface(void)
{
    scr = lv_obj_create(NULL);
    LCARS_bg(scr);
    lv_scr_load_anim(scr, LV_SCR_LOAD_ANIM_MOVE_TOP, 1000, 0, false);
    
    coms_button = lv_btn_create(scr);
    settings_button = lv_btn_create(scr);
    telemetry_button = lv_btn_create(scr);
    sensors_button = lv_btn_create(scr);
    
    add_pink1_button(coms_button, "COMS", 195, 25);
    add_pink1_button(settings_button, "SYSTEM", 195, 75);
    add_gold_button(telemetry_button, "TELEM", 195, 125);
    add_gold_button(sensors_button, "SCAN", 195, 175);
    
}