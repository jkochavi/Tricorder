/** @file sensorpack1.h
 * This is the header file for the functions and timer callbacks related to Sensorpack 1, which contains
 * the MPU6050 6-axis accelerometer and gyroscope and the MCP9808 temperature sensor. 
 * @author Jordan Kochavi
 * @date June 19th, 2022
 */

void init_sensorpackgui();

void begin_sensors();

void read_sensors(lv_timer_t * timer);

void update_plot(lv_timer_t * timer);