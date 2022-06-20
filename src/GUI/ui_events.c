// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.0.4
// LVGL VERSION: 8.2
// PROJECT: Tricorder2

#include "ui.h"
#include "cpp_events.h"
#include "stdio.h"

void clearconsoletext(lv_event_t * e)
{
	lv_textarea_set_text(ui_console, "");
}

void keypress(lv_event_t * e)
{	
	const char * txt = lv_btnmatrix_get_btn_text(ui_keyboard, lv_btnmatrix_get_selected_btn(ui_keyboard));
	const char * txt2 = lv_textarea_get_text(ui_character);
	sendpress(txt, txt2);
	lv_textarea_set_text(ui_character,"");
}

void execcmd(lv_event_t * e)
{
	const char * cmd = lv_textarea_get_text(ui_cmdtextarea);
	bool return_msg = run_cmd(cmd);
	lv_textarea_set_text(ui_cmdtextarea,"");
	if (return_msg){
		lv_textarea_set_placeholder_text(ui_cmdtextarea,"> CMD EXECUTED");
	}
	else {
		lv_textarea_set_placeholder_text(ui_cmdtextarea,"> CMD FAILED");
	}
}

void cmdplaceholder(lv_event_t * e)
{
	// Your code here
}
