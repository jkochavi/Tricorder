#include "cpp_events.h"
#include "BleKeyboard.h"

BleKeyboard keyboard("Tricorder");

bool keyboard_init = false;

extern "C" {

void init_keyboard()
{
    if (!keyboard_init){
        keyboard.begin();
        keyboard_init = true;
    }
}

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
}