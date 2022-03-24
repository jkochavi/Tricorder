// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.4
// LVGL VERSION: 8.2
// PROJECT: Tricorder

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
lv_obj_t * ui_Square1;
lv_obj_t * ui_Square2;
lv_obj_t * ui_Square3;
lv_obj_t * ui_Square4;
lv_obj_t * ui_Square5;
lv_obj_t * ui_Square6;
lv_obj_t * ui_Square7;
lv_obj_t * ui_Square8;
lv_obj_t * ui_Square9;
lv_obj_t * ui_Square10;
lv_obj_t * ui_Square11;
lv_obj_t * ui_Square12;
lv_obj_t * ui_Square13;
lv_obj_t * ui_Square14;
lv_obj_t * ui_Square15;
lv_obj_t * ui_Battery;
lv_obj_t * ui_Status;
lv_obj_t * ui_WIFIstatus;
lv_obj_t * ui_BTstatus;
lv_obj_t * ui_Chart1;
lv_obj_t * ui_console;
lv_obj_t * ui_coms;
lv_obj_t * ui_settings;
lv_obj_t * ui_lcars;
lv_obj_t * ui_Round1;
lv_obj_t * ui_Round2;
lv_obj_t * ui_Round3;
lv_obj_t * ui_Round4;
lv_obj_t * ui_Round5;
lv_obj_t * ui_Round6;
lv_obj_t * ui_Round7;
lv_obj_t * ui_Round8;
lv_obj_t * ui_Round9;
lv_obj_t * ui_Round10;
lv_obj_t * ui_Round11;
lv_obj_t * ui_Round12;
lv_obj_t * ui_Round13;
lv_obj_t * ui_Round14;
lv_obj_t * ui_Round15;
lv_obj_t * ui_Round16;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "#error LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

//
// FUNCTION HEADER
void SquareSwitch1_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch1_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch2_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch2_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch3_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch3_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch4_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch4_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch5_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch5_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch6_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch6_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch7_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch7_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch8_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch8_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch9_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch9_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch10_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch10_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch11_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch11_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch12_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch12_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch13_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch13_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch14_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch14_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

//
// FUNCTION HEADER
void SquareSwitch15_Animation(lv_obj_t * TargetObject, int delay);

// FUNCTION
void SquareSwitch15_Animation(lv_obj_t * TargetObject, int delay)
{

    //
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_0, 255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_0);

    //
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, 0, 255);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 1000);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}

///////////////////// FUNCTIONS ////////////////////
static void ui_event_Chart1(lv_event_t * e)
{
    lv_event_code_t event = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    if(event == LV_EVENT_VALUE_CHANGED) {
        updatechart(e);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Home_screen_init(void)
{

    // ui_Home

    ui_Home = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_Home, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Square1

    ui_Square1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square1, &ui_img_square1_png);

    lv_obj_set_width(ui_Square1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square1, 57);
    lv_obj_set_y(ui_Square1, 48);

    lv_obj_add_flag(ui_Square1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square2

    ui_Square2 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square2, &ui_img_square2_png);

    lv_obj_set_width(ui_Square2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square2, 57);
    lv_obj_set_y(ui_Square2, 67);

    lv_obj_add_flag(ui_Square2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square3

    ui_Square3 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square3, &ui_img_square1_png);

    lv_obj_set_width(ui_Square3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square3, 57);
    lv_obj_set_y(ui_Square3, 86);

    lv_obj_add_flag(ui_Square3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square3, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square4

    ui_Square4 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square4, &ui_img_square1_png);

    lv_obj_set_width(ui_Square4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square4, 57);
    lv_obj_set_y(ui_Square4, 188);

    lv_obj_add_flag(ui_Square4, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square4, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square5

    ui_Square5 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square5, &ui_img_square4_png);

    lv_obj_set_width(ui_Square5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square5, 57);
    lv_obj_set_y(ui_Square5, 207);

    lv_obj_add_flag(ui_Square5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square5, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square6

    ui_Square6 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square6, &ui_img_square3_png);

    lv_obj_set_width(ui_Square6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square6, 132);
    lv_obj_set_y(ui_Square6, 18);

    lv_obj_add_flag(ui_Square6, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square6, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square7

    ui_Square7 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square7, &ui_img_square1_png);

    lv_obj_set_width(ui_Square7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square7, 132);
    lv_obj_set_y(ui_Square7, 48);

    lv_obj_add_flag(ui_Square7, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square7, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square8

    ui_Square8 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square8, &ui_img_square3_png);

    lv_obj_set_width(ui_Square8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square8, 132);
    lv_obj_set_y(ui_Square8, 67);

    lv_obj_add_flag(ui_Square8, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square8, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square9

    ui_Square9 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square9, &ui_img_square3_png);

    lv_obj_set_width(ui_Square9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square9, 132);
    lv_obj_set_y(ui_Square9, 86);

    lv_obj_add_flag(ui_Square9, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square9, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square10

    ui_Square10 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square10, &ui_img_square1_png);

    lv_obj_set_width(ui_Square10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square10, 132);
    lv_obj_set_y(ui_Square10, 188);

    lv_obj_add_flag(ui_Square10, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square10, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square11

    ui_Square11 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square11, &ui_img_square1_png);

    lv_obj_set_width(ui_Square11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square11, 132);
    lv_obj_set_y(ui_Square11, 207);

    lv_obj_add_flag(ui_Square11, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square11, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square12

    ui_Square12 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square12, &ui_img_square3_png);

    lv_obj_set_width(ui_Square12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square12, 202);
    lv_obj_set_y(ui_Square12, 188);

    lv_obj_add_flag(ui_Square12, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square12, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square13

    ui_Square13 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square13, &ui_img_square3_png);

    lv_obj_set_width(ui_Square13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square13, 202);
    lv_obj_set_y(ui_Square13, 207);

    lv_obj_add_flag(ui_Square13, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square13, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square14

    ui_Square14 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square14, &ui_img_square2_png);

    lv_obj_set_width(ui_Square14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square14, 277);
    lv_obj_set_y(ui_Square14, 188);

    lv_obj_add_flag(ui_Square14, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square14, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Square15

    ui_Square15 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Square15, &ui_img_square2_png);

    lv_obj_set_width(ui_Square15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Square15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Square15, 277);
    lv_obj_set_y(ui_Square15, 207);

    lv_obj_add_flag(ui_Square15, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Square15, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Battery

    ui_Battery = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Battery, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Battery, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Battery, 61);
    lv_obj_set_y(ui_Battery, 17);

    lv_label_set_text(ui_Battery, "BATT 100%");

    lv_obj_set_style_text_color(ui_Battery, lv_color_hex(0x68CCFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Battery, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Battery, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Status

    ui_Status = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Status, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Status, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Status, 75);
    lv_obj_set_y(ui_Status, 47);

    lv_label_set_text(ui_Status, "STATUS");

    lv_obj_set_style_text_color(ui_Status, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Status, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Status, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_WIFIstatus

    ui_WIFIstatus = lv_label_create(ui_Home);

    lv_obj_set_width(ui_WIFIstatus, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_WIFIstatus, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_WIFIstatus, 75);
    lv_obj_set_y(ui_WIFIstatus, 66);

    lv_label_set_text(ui_WIFIstatus, "WiFi");

    lv_obj_set_style_text_color(ui_WIFIstatus, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_WIFIstatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_WIFIstatus, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_BTstatus

    ui_BTstatus = lv_label_create(ui_Home);

    lv_obj_set_width(ui_BTstatus, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_BTstatus, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_BTstatus, 75);
    lv_obj_set_y(ui_BTstatus, 85);

    lv_label_set_text(ui_BTstatus, "BT");

    lv_obj_set_style_text_color(ui_BTstatus, lv_color_hex(0x6ACEFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BTstatus, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BTstatus, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Chart1

    ui_Chart1 = lv_chart_create(ui_Home);

    lv_obj_set_width(ui_Chart1, 123);
    lv_obj_set_height(ui_Chart1, 60);

    lv_obj_set_x(ui_Chart1, 195);
    lv_obj_set_y(ui_Chart1, 30);

    lv_obj_add_event_cb(ui_Chart1, ui_event_Chart1, LV_EVENT_ALL, NULL);

    lv_obj_set_style_radius(ui_Chart1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Chart1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Chart1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_console

    ui_console = lv_label_create(ui_Home);

    lv_obj_set_width(ui_console, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_console, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_console, 75);
    lv_obj_set_y(ui_console, 187);

    lv_label_set_text(ui_console, "CONSOLE");

    lv_obj_set_style_text_color(ui_console, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_console, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_console, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_coms

    ui_coms = lv_label_create(ui_Home);

    lv_obj_set_width(ui_coms, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_coms, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_coms, 75);
    lv_obj_set_y(ui_coms, 205);

    lv_label_set_text(ui_coms, "COMS");

    lv_obj_set_style_text_color(ui_coms, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_coms, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_coms, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_settings

    ui_settings = lv_label_create(ui_Home);

    lv_obj_set_width(ui_settings, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_settings, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_settings, 220);
    lv_obj_set_y(ui_settings, 187);

    lv_label_set_text(ui_settings, "SETTINGS");

    lv_obj_set_style_text_color(ui_settings, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_settings, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_settings, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_lcars

    ui_lcars = lv_label_create(ui_Home);

    lv_obj_set_width(ui_lcars, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_lcars, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_lcars, 220);
    lv_obj_set_y(ui_lcars, 206);

    lv_label_set_text(ui_lcars, "LCARS");

    lv_obj_set_style_text_color(ui_lcars, lv_color_hex(0xFFEE8B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_lcars, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_lcars, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Round1

    ui_Round1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round1, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round1, 32);
    lv_obj_set_y(ui_Round1, 18);

    lv_obj_add_flag(ui_Round1, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round1, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round1, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round1, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round2

    ui_Round2 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round2, &ui_img_round2_png);

    lv_obj_set_width(ui_Round2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round2, 32);
    lv_obj_set_y(ui_Round2, 48);

    lv_obj_add_flag(ui_Round2, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round2, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round2, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round2, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round3

    ui_Round3 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round3, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round3, 32);
    lv_obj_set_y(ui_Round3, 67);

    lv_obj_add_flag(ui_Round3, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round3, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round3, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round4

    ui_Round4 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round4, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round4, 32);
    lv_obj_set_y(ui_Round4, 86);

    lv_obj_add_flag(ui_Round4, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round4, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round4, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round4, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round5

    ui_Round5 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round5, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round5, 32);
    lv_obj_set_y(ui_Round5, 188);

    lv_obj_add_flag(ui_Round5, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round5, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round5, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round5, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round6

    ui_Round6 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round6, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round6, 32);
    lv_obj_set_y(ui_Round6, 207);

    lv_obj_add_flag(ui_Round6, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round6, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round6, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round6, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round7

    ui_Round7 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round7, &ui_img_round3_png);

    lv_obj_set_width(ui_Round7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round7, 150);
    lv_obj_set_y(ui_Round7, 18);

    lv_obj_add_flag(ui_Round7, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round7, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round7, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round7, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round8

    ui_Round8 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round8, &ui_img_round4_png);

    lv_obj_set_width(ui_Round8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round8, 150);
    lv_obj_set_y(ui_Round8, 48);

    lv_obj_add_flag(ui_Round8, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round8, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round8, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round8, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round9

    ui_Round9 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round9, &ui_img_round3_png);

    lv_obj_set_width(ui_Round9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round9, 150);
    lv_obj_set_y(ui_Round9, 67);

    lv_obj_add_flag(ui_Round9, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round9, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round9, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round9, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round10

    ui_Round10 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round10, &ui_img_round4_png);

    lv_obj_set_width(ui_Round10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round10, 150);
    lv_obj_set_y(ui_Round10, 86);

    lv_obj_add_flag(ui_Round10, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round10, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round10, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round10, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round11

    ui_Round11 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round11, &ui_img_round4_png);

    lv_obj_set_width(ui_Round11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round11, 150);
    lv_obj_set_y(ui_Round11, 188);

    lv_obj_add_flag(ui_Round11, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round11, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round11, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round11, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round12

    ui_Round12 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round12, &ui_img_round4_png);

    lv_obj_set_width(ui_Round12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round12, 150);
    lv_obj_set_y(ui_Round12, 207);

    lv_obj_add_flag(ui_Round12, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round12, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round12, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round12, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round13

    ui_Round13 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round13, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round13, 177);
    lv_obj_set_y(ui_Round13, 188);

    lv_obj_add_flag(ui_Round13, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round13, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round13, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round13, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round14

    ui_Round14 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round14, &ui_img_round_button_png);

    lv_obj_set_width(ui_Round14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round14, 177);
    lv_obj_set_y(ui_Round14, 207);

    lv_obj_add_flag(ui_Round14, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round14, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round14, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round14, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round15

    ui_Round15 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round15, &ui_img_round3_png);

    lv_obj_set_width(ui_Round15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round15, 295);
    lv_obj_set_y(ui_Round15, 188);

    lv_obj_add_flag(ui_Round15, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round15, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round15, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round15, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round16

    ui_Round16 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Round16, &ui_img_round3_png);

    lv_obj_set_width(ui_Round16, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Round16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round16, 295);
    lv_obj_set_y(ui_Round16, 207);

    lv_obj_add_flag(ui_Round16, LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Round16, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_img_recolor(ui_Round16, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round16, 150, LV_PART_MAIN | LV_STATE_PRESSED);

}

void ui_init(void)
{
    ui_Home_screen_init();
    lv_disp_load_scr(ui_Home);
}

