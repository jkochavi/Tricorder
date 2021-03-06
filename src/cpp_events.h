/** @file cpp_events.h
 * This is the header file for the custom event callbacks as part of the GUI. 
 * It contains one function compiled in C++ for initializing the Bluetooth HID device, and
 * two functions for the GUI event callbacks that are compiled in C. 
 * @author Jordan Kochavi
 * @date June 19th, 2022
 */ 

void init_keyboard();

void init_SD_card();

#ifdef __cplusplus
extern "C"
{
#endif

void sendpress(const char * txt, const char * txt2);

bool run_cmd(const char * cmd);

#ifdef __cplusplus
}
#endif



