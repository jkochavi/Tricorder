#include "cpp_events.h"
#include "BleKeyboard.h"
#include "lvgl.h"
#include "GUI/ui.h"
#include "sensorpack1.h"

BleKeyboard keyboard("Tricorder");

void init_keyboard()
{
    keyboard.begin();
}

extern "C" {

void sendpress(const char * txt, const char * txt2)
{
    // if what is entered into the text edit field matches
    // what was typed on the keypad...
    if (strcmp(txt,txt2)==0){
        uint32_t i = 0;
        while(txt[i] != '\0') {
            keyboard.write(txt[i]);
            i++;
        }
    }
    // if they don't match, then it means a special key 
    // was pressed, like lowerase,uppercase,backspace,speical chars, etc...
    else {
        if (strcmp(txt, BACKSPACE) == 0){
            keyboard.write('\b');
        }
        else if (strcmp(txt, ENTER) == 0){
            keyboard.write('\n');
        }
        else if (strcmp(txt, LEFTARROW) == 0){
            keyboard.write(0xD8);
        }
        else if (strcmp(txt, RIGHTARROW) == 0){
            keyboard.write(0xD7);
        }
    }
}

bool run_cmd(const char * cmd){
    bool return_msg = false;
    char prefix = cmd[0];
    if (prefix == 'p'){
        lv_label_set_text(ui_sigchoice,&cmd[1]);
        return_msg = true;
    }
    else {
        return_msg = false;
    }
    return return_msg;
}

}