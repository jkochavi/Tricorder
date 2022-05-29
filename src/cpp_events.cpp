#include "cpp_events.h"
#include "BleKeyboard.h"

BleKeyboard keyboard("Tricorder");

void init_keyboard()
{
    keyboard.begin();
    
}

extern "C" {

void sendpress(unsigned char character)
{
    keyboard.write(character);
}


}