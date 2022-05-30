// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.4
// LVGL VERSION: 8.2
// PROJECT: Tricorder2

#include "ui.h"
#include "cpp_events.h"

void clearconsoletext(lv_event_t * e)
{
	lv_textarea_set_text(ui_console, "");
}

void keypress(lv_event_t * e)
{
	//int k = lv_event_get_data();
	//lv_textarea_add_char(ui_console,k);
	const char * character = lv_textarea_get_text(ui_character);
	sendpress(character);
	lv_textarea_set_text(ui_character,"");
}
