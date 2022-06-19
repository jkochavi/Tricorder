/** @file cpp_timers.h
 * This file contains the prototypes for the timer callback functions in the GUI. 
 * @author Jordan Kochavi
 * @date June 19th, 2022
 */ 
void batterytimer(lv_timer_t * timer);

float batterylevel();

void console_timer(lv_timer_t * timer);