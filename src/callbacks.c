#include "lvgl.h"
#include "GUI/ui.h"

void resizeWifiOptionsPanel(bool size)
{
    if (size)
    {
        lv_obj_set_height(ui_wifioptions, 180);
    }
    else
    {
        lv_obj_set_height(ui_wifioptions, 90);
    }       
}

void scanForNetworks()
{
    _ui_flag_modify(ui_wifioptions, LV_OBJ_FLAG_HIDDEN, 2);
}