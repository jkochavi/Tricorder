#include "lvgl.h"
#include "GUI/ui.h"

#define addr_MCP9808 0x18
#define addr_MPU6050 0x68

lv_obj_t * ui_sensorpack1;
lv_obj_t * ui_sensorreadings1;

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

    // Modify keyboard layer
    lv_obj_move_foreground(ui_keyboard);
}

