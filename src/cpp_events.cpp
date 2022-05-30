#include "cpp_events.h"
#include "BleKeyboard.h"


BleKeyboard keyboard("Tricorder");

void init_keyboard()
{
    keyboard.begin();
    
}

extern "C" {

void sendpress(const char * character)
{
    uint32_t i = 0;
    while(character[i] != '\0') {
        keyboard.write(character[i]);
        i++;
    }
}


}