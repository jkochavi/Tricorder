#include "lvgl.h"
#include "button_test.h"

/**********************
 *  STATIC VARIABLES
 **********************/
static lv_obj_t * Button;       // Button object
static lv_style_t Button_Style; // Unpressed Button Style
static lv_style_t Button_Pressed_Style; // Pressed Button Style



void button_test(void)
{
    lv_style_init(&Button_Style);
    lv_style_set_radius(&Button_Style, 30); 
    lv_style_set_bg_opa(&Button_Style, LV_OPA_100);
    lv_style_set_bg_color(&Button_Style, lv_color_LCARS_gold());
    lv_style_set_outline_opa(&Button_Style, LV_OPA_COVER);
    lv_style_set_outline_color(&Button_Style, lv_color_LCARS_gold());
    lv_style_set_text_color(&Button_Style, lv_color_black());
    lv_style_set_pad_all(&Button_Style, 10);
    lv_style_init(&Button_Pressed_Style);
    lv_style_set_outline_width(&Button_Pressed_Style, 30);
    lv_style_set_outline_opa(&Button_Pressed_Style, LV_OPA_TRANSP);
    lv_style_set_translate_y(&Button_Pressed_Style, 5);
    lv_style_set_bg_color(&Button_Pressed_Style, lv_color_darken(lv_color_LCARS_gold(), 127));
    static lv_style_transition_dsc_t trans;
    static lv_style_prop_t props[] = {LV_STYLE_OUTLINE_WIDTH, LV_STYLE_OUTLINE_OPA, (lv_style_prop_t)0};
    lv_style_transition_dsc_init(&trans, props, lv_anim_path_linear, 300, 0, NULL);
    lv_style_set_transition(&Button_Pressed_Style, &trans);
    Button = lv_btn_create(lv_scr_act());
    lv_obj_remove_style_all(Button);                         
    lv_obj_add_style(Button, &Button_Style, 0);
    lv_obj_add_style(Button, &Button_Pressed_Style, LV_STATE_PRESSED);
    lv_obj_set_size(Button, 100, 40);
    lv_obj_center(Button);
    lv_obj_t * label = lv_label_create(Button);
    lv_label_set_text(label, "BATT");
    lv_obj_center(label);
}