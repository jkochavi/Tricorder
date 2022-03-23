// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.4
// LVGL VERSION: 8.2
// PROJECT: Tricorder

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////
lv_obj_t * ui_Home;
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
lv_obj_t * ui_Image1;
lv_obj_t * ui_Image2;
lv_obj_t * ui_Image3;
lv_obj_t * ui_Image4;
lv_obj_t * ui_Image5;
lv_obj_t * ui_Image6;
lv_obj_t * ui_Image7;
lv_obj_t * ui_Image8;
lv_obj_t * ui_Image9;
lv_obj_t * ui_Image10;
lv_obj_t * ui_Image11;
lv_obj_t * ui_Image12;
lv_obj_t * ui_Image13;
lv_obj_t * ui_Image14;
lv_obj_t * ui_Image15;
lv_obj_t * ui_Label1;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 32
    #error "LV_COLOR_DEPTH should be 32bit to match SquareLine Studio's settings"
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

///////////////////// SCREENS ////////////////////
void ui_Home_screen_init(void)
{

    // ui_Home

    ui_Home = lv_obj_create(NULL);

    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);

    lv_obj_set_style_bg_img_src(ui_Home, &ui_img_home_png, LV_PART_MAIN | LV_STATE_DEFAULT);

    // ui_Round1

    ui_Round1 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round1, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round1, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round1, LV_IMGBTN_STATE_CHECKED_RELEASED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round1, 16);
    lv_obj_set_width(ui_Round1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round1, 32);
    lv_obj_set_y(ui_Round1, 18);

    lv_obj_set_style_bg_img_src(ui_Round1, &ui_img_round_button_png, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_img_src(ui_Round1, &ui_img_round_button_png, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_img_recolor(ui_Round1, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round1, 150, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_bg_img_src(ui_Round1, &ui_img_round_button_png, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_img_recolor(ui_Round1, lv_color_hex(0x4040B4), LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);
    lv_obj_set_style_bg_img_recolor_opa(ui_Round1, 255, LV_PART_MAIN | LV_STATE_CHECKED | LV_STATE_PRESSED);

    // ui_Round2

    ui_Round2 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round2, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round2_png, NULL);
    lv_imgbtn_set_src(ui_Round2, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round2_png, NULL);

    lv_obj_set_height(ui_Round2, 16);
    lv_obj_set_width(ui_Round2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round2, 32);
    lv_obj_set_y(ui_Round2, 48);

    lv_obj_set_style_img_recolor(ui_Round2, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round2, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round3

    ui_Round3 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round3, 16);
    lv_obj_set_width(ui_Round3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round3, 32);
    lv_obj_set_y(ui_Round3, 67);

    lv_obj_set_style_img_recolor(ui_Round3, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round3, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round4

    ui_Round4 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round4, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round4, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round4, 16);
    lv_obj_set_width(ui_Round4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round4, 32);
    lv_obj_set_y(ui_Round4, 86);

    lv_obj_set_style_img_recolor(ui_Round4, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round4, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round5

    ui_Round5 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round5, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round5, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round5, 16);
    lv_obj_set_width(ui_Round5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round5, 32);
    lv_obj_set_y(ui_Round5, 188);

    lv_obj_set_style_img_recolor(ui_Round5, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round5, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round6

    ui_Round6 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round6, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round6, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round6, 16);
    lv_obj_set_width(ui_Round6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round6, 32);
    lv_obj_set_y(ui_Round6, 207);

    lv_obj_set_style_img_recolor(ui_Round6, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round6, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round7

    ui_Round7 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round7, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round3_png, NULL);
    lv_imgbtn_set_src(ui_Round7, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round3_png, NULL);

    lv_obj_set_height(ui_Round7, 16);
    lv_obj_set_width(ui_Round7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round7, 150);
    lv_obj_set_y(ui_Round7, 18);

    lv_obj_set_style_img_recolor(ui_Round7, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round7, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round8

    ui_Round8 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round8, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round4_png, NULL);
    lv_imgbtn_set_src(ui_Round8, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round4_png, NULL);

    lv_obj_set_height(ui_Round8, 16);
    lv_obj_set_width(ui_Round8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round8, 150);
    lv_obj_set_y(ui_Round8, 48);

    lv_obj_set_style_img_recolor(ui_Round8, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round8, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round9

    ui_Round9 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round9, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round3_png, NULL);
    lv_imgbtn_set_src(ui_Round9, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round3_png, NULL);

    lv_obj_set_height(ui_Round9, 16);
    lv_obj_set_width(ui_Round9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round9, 150);
    lv_obj_set_y(ui_Round9, 67);

    lv_obj_set_style_img_recolor(ui_Round9, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round9, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round10

    ui_Round10 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round10, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round4_png, NULL);
    lv_imgbtn_set_src(ui_Round10, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round4_png, NULL);

    lv_obj_set_height(ui_Round10, 16);
    lv_obj_set_width(ui_Round10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round10, 150);
    lv_obj_set_y(ui_Round10, 86);

    lv_obj_set_style_img_recolor(ui_Round10, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round10, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round11

    ui_Round11 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round11, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round4_png, NULL);
    lv_imgbtn_set_src(ui_Round11, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round4_png, NULL);

    lv_obj_set_height(ui_Round11, 16);
    lv_obj_set_width(ui_Round11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round11, 150);
    lv_obj_set_y(ui_Round11, 188);

    lv_obj_set_style_img_recolor(ui_Round11, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round11, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round12

    ui_Round12 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round12, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round4_png, NULL);
    lv_imgbtn_set_src(ui_Round12, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round4_png, NULL);

    lv_obj_set_height(ui_Round12, 16);
    lv_obj_set_width(ui_Round12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round12, 150);
    lv_obj_set_y(ui_Round12, 207);

    lv_obj_set_style_img_recolor(ui_Round12, lv_color_hex(0x003200), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round12, 100, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round13

    ui_Round13 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round13, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round13, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round13, 16);
    lv_obj_set_width(ui_Round13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round13, 177);
    lv_obj_set_y(ui_Round13, 188);

    lv_obj_set_style_img_recolor(ui_Round13, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round13, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round14

    ui_Round14 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round14, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round_button_png, NULL);
    lv_imgbtn_set_src(ui_Round14, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round_button_png, NULL);

    lv_obj_set_height(ui_Round14, 16);
    lv_obj_set_width(ui_Round14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round14, 177);
    lv_obj_set_y(ui_Round14, 207);

    lv_obj_set_style_img_recolor(ui_Round14, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round14, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round15

    ui_Round15 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round15, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round3_png, NULL);
    lv_imgbtn_set_src(ui_Round15, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round3_png, NULL);

    lv_obj_set_height(ui_Round15, 16);
    lv_obj_set_width(ui_Round15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round15, 295);
    lv_obj_set_y(ui_Round15, 188);

    lv_obj_set_style_img_recolor(ui_Round15, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round15, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Round16

    ui_Round16 = lv_imgbtn_create(ui_Home);
    lv_imgbtn_set_src(ui_Round16, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_round3_png, NULL);
    lv_imgbtn_set_src(ui_Round16, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_round3_png, NULL);

    lv_obj_set_height(ui_Round16, 16);
    lv_obj_set_width(ui_Round16, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Round16, 295);
    lv_obj_set_y(ui_Round16, 207);

    lv_obj_set_style_img_recolor(ui_Round16, lv_color_hex(0x320000), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_Round16, 150, LV_PART_MAIN | LV_STATE_PRESSED);

    // ui_Image1

    ui_Image1 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image1, &ui_img_square1_png);

    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image1, 57);
    lv_obj_set_y(ui_Image1, 48);

    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image2

    ui_Image2 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image2, &ui_img_square2_png);

    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image2, 57);
    lv_obj_set_y(ui_Image2, 67);

    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image3

    ui_Image3 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image3, &ui_img_square1_png);

    lv_obj_set_width(ui_Image3, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image3, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image3, 57);
    lv_obj_set_y(ui_Image3, 86);

    lv_obj_add_flag(ui_Image3, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image3, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image4

    ui_Image4 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image4, &ui_img_square1_png);

    lv_obj_set_width(ui_Image4, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image4, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image4, 57);
    lv_obj_set_y(ui_Image4, 188);

    lv_obj_add_flag(ui_Image4, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image4, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image5

    ui_Image5 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image5, &ui_img_square4_png);

    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image5, 57);
    lv_obj_set_y(ui_Image5, 207);

    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image6

    ui_Image6 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image6, &ui_img_square3_png);

    lv_obj_set_width(ui_Image6, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image6, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image6, 132);
    lv_obj_set_y(ui_Image6, 18);

    lv_obj_add_flag(ui_Image6, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image6, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image7

    ui_Image7 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image7, &ui_img_square1_png);

    lv_obj_set_width(ui_Image7, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image7, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image7, 132);
    lv_obj_set_y(ui_Image7, 48);

    lv_obj_add_flag(ui_Image7, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image7, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image8

    ui_Image8 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image8, &ui_img_square3_png);

    lv_obj_set_width(ui_Image8, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image8, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image8, 132);
    lv_obj_set_y(ui_Image8, 67);

    lv_obj_add_flag(ui_Image8, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image8, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image9

    ui_Image9 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image9, &ui_img_square3_png);

    lv_obj_set_width(ui_Image9, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image9, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image9, 132);
    lv_obj_set_y(ui_Image9, 86);

    lv_obj_add_flag(ui_Image9, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image9, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image10

    ui_Image10 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image10, &ui_img_square1_png);

    lv_obj_set_width(ui_Image10, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image10, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image10, 132);
    lv_obj_set_y(ui_Image10, 188);

    lv_obj_add_flag(ui_Image10, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image10, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image11

    ui_Image11 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image11, &ui_img_square1_png);

    lv_obj_set_width(ui_Image11, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image11, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image11, 132);
    lv_obj_set_y(ui_Image11, 207);

    lv_obj_add_flag(ui_Image11, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image11, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image12

    ui_Image12 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image12, &ui_img_square3_png);

    lv_obj_set_width(ui_Image12, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image12, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image12, 202);
    lv_obj_set_y(ui_Image12, 188);

    lv_obj_add_flag(ui_Image12, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image12, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image13

    ui_Image13 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image13, &ui_img_square3_png);

    lv_obj_set_width(ui_Image13, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image13, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image13, 202);
    lv_obj_set_y(ui_Image13, 207);

    lv_obj_add_flag(ui_Image13, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image13, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image14

    ui_Image14 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image14, &ui_img_square2_png);

    lv_obj_set_width(ui_Image14, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image14, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image14, 277);
    lv_obj_set_y(ui_Image14, 188);

    lv_obj_add_flag(ui_Image14, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image14, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Image15

    ui_Image15 = lv_img_create(ui_Home);
    lv_img_set_src(ui_Image15, &ui_img_square2_png);

    lv_obj_set_width(ui_Image15, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Image15, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Image15, 277);
    lv_obj_set_y(ui_Image15, 207);

    lv_obj_add_flag(ui_Image15, LV_OBJ_FLAG_ADV_HITTEST);
    lv_obj_clear_flag(ui_Image15, LV_OBJ_FLAG_SCROLLABLE);

    // ui_Label1

    ui_Label1 = lv_label_create(ui_Home);

    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);

    lv_obj_set_x(ui_Label1, 61);
    lv_obj_set_y(ui_Label1, 17);

    lv_label_set_text(ui_Label1, "BATT 100%");

    lv_obj_set_style_text_color(ui_Label1, lv_color_hex(0x68CCFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label1, &ui_font_Regular_Text, LV_PART_MAIN | LV_STATE_DEFAULT);

}

void ui_init(void)
{
    ui_Home_screen_init();
    lv_disp_load_scr(ui_Home);
}

