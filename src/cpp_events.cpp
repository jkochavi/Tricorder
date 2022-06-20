/** @file cpp_events.cpp
 * This file is used in conjunction with GUI/ui_events.c. The general GUI layout is designed with 
 * Squareline Studio, which is a Windows application used to graphically design an interface for LVGL.
 * This application is used to export the GUI in C for deployment on hardware. All of the auto-generated
 * functions for the GUI are contained in the source folder: GUI. One of those auto-generated files includes
 * callback functions for various events in the GUI, such as clicking a button or interacting with a widget. 
 * This file includes all of the custom code to be included the auto-generated event callback file.
 * 
 * @author Jordan Kochavi
 * @date June 19th, 2022
 */
#include "BleKeyboard.h"           // Include the Bluetooth HID keyboard library
#include "lvgl.h"                  // Graphics library
#include "GUI/ui.h"                // Squareline-generated GUI functions
#include "sensorpack_select.h"     // Specifying which sensors are on the device
#include "SD_functions.h"          // SD interface library
// When the LVGL keyboard is interacted with, the auto-generated keyboard callback
// outputs a char array containing the ID and value of the pressed key. 
#define BACKSPACE  "\xef\x95\x9A"  // Keyboard output code when a backspace is pressed
#define ENTER      "\xef\xA2\xA2"  // Keyboard output code when the enter key is pressed
#define LEFTARROW  "\xef\x81\x93"  // Keyboard output code when the left arrow is pressed
#define RIGHTARROW "\xef\x81\x94"  // Keyboard output code when the right arrow is pressed
#define SD_CS      15
// We also need to check which keyboard configuration is active among the widgets three modes:
// Lowercase, uppercase, and special characters. 
enum {
    LOWERCASE,
    UPPERCASE,
    SPECIALCASE
};

BleKeyboard keyboard("Tricorder"); // Create keyboard object and name it appropriately...

/** @brief Function to initialize the Bluetooth keyboard.
 * @details When the keyboard is initialized, the device will show up under available 
 * bluetooth devices on a smartphone, laptop, tablet, etc. It may be paired with only
 * after being initialized. 
 */
void init_keyboard()
{
    keyboard.begin(); // Initialize the keyboard
}

/** @brief Function to initialize the SD card.
 */
void init_SD_card()
{
    SD.begin(SD_CS);  // Initialize the SD card
}

// As the Squareline-generated files are compiled in C, we must also compile these event
// callback functions in C, rather than C++
extern "C" {

/** @brief Function to send an ASCII character from the Bluetooth HID device.
 * @details The LVGL keyboard widget is linked to a character edit field. It would take too much
 * time to differentiate between a regular number or letter and a special function, such as Enter,
 * Left Arrow, Right Arrow, etc, so we need to read the value of the button pressed on the widget, as
 * well as the current character in the character edit field. By comparing these two values, we can 
 * determine what type of character was pressed, and transmit it appropriately. For example, if the letter
 * 'a' was pressed on the keyboard widget, then the pressed character would correspond to 'a', and the 
 * value in the character edit field would read 'a'. However, if the pressed character was Backspace, then
 * the pressed character would correspond to '\xef\x95\x9A' (the button ID in the widget), while the 
 * the character edit field would be empty. 
 * @param txt The text value associated with the pressed button on the Keyboard widget.
 * @param txt2 The character in the character edit field widget. 
 */
void sendpress(const char * txt, const char * txt2)
{
    // If what is entered into the text edit field matches
    // what was typed on the keypad...
    if (strcmp(txt,txt2)==0){       // If the two char arrays match...
        uint8_t i = 0;              //    Initialize counter variable
        while(txt[i] != '\0') {     //    Until we reach the terminating byte...
            keyboard.write(txt[i]); //    Transmit the current byte of the character
            i++;                    //    Increment the counter
        }
    }
    // If they don't match, then it means a special key 
    // was pressed, like lowerase,uppercase,backspace,speical chars, etc...
    else {
        if (strcmp(txt, BACKSPACE) == 0){        // If the Backspace button on the widget was pressed...
            keyboard.write('\b');                //     Write the ASCII backspace code
        }          
        else if (strcmp(txt, ENTER) == 0){       // If the Enter button on the widget was pressed...
            keyboard.write('\n');                //     Write the ASCII enter code
        }
        else if (strcmp(txt, LEFTARROW) == 0){   // If the Left Arrow button on the widget was pressed...
            keyboard.write(0xD8);                //     Write the ASCII left arrow code
        }   
        else if (strcmp(txt, RIGHTARROW) == 0){  // If the Right Arrow button on the widget was pressed...
            keyboard.write(0xD7);                //     Write the ASCII right arrow code
        }
    }
}

/** @brief Function to evaluate the command entered into the command prompt widgets.
 * @details This function receives a char array from the text edit field where a 
 * command was entered and evaluates it accordingly. This function is used as part of the 
 * event callback for the keyboard widget associated with the command prompt. The 
 * "interpretor" of this command evaluation includes a prefix, which is the first character
 * in the array. For example, the prefix "p" is for plotting a signal. If the char array
 * was "p3," then it means the user wants to plot Signal 3 from the sensor pack on the device's
 * chart. 
 * @param cmd A char array containing the text entered into the edit field. 
 * @return A boolean noting the success or failure of the command evaluation. 
 */
bool run_cmd(const char * cmd){
    bool return_msg = false;                     // Initialize return message to failure
    char prefix = cmd[0];                        // Get the command prefix
    if (prefix == 'p'){                          // If the prefix was "p" for plot...
        lv_label_set_text(ui_sigchoice,&cmd[1]); //     Then assign the signal choice
        return_msg = true;                       //     Return success message
    } 
    else if (prefix == 'r'){                     // If the prefix was "r" for refresh...
        listDir(SD, "/", 0);                     //     List the SD card directory
        return_msg = true;                       //     Return success message
    }
    else {                                       // Otherwise an invalid prefix was entered...
        return_msg = false;                      //     Return failure message
    }
    return return_msg;
}
}