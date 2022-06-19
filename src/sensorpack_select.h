/** @file sensorpack_select.h
 * This file is used to select the appropriate header file depending on which sensorpack 
 * is installed in the device. Currently, only one external sensor board has been manufactured. 
 * However, the goal is to make several different boards to connect to the device in a modular 
 * fashion.
 * @author Jordan Kochavi
 * @date 19 June latest modification
 */
// Uncomment the sensorpack installed in the device
#include "sensorpack1.h"