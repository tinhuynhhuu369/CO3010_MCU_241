/*
 * traffic_control.h
 *
 *  Created on: Nov 27, 2024
 *      Author: admin
 */

#ifndef INC_TRAFFIC_CONTROL_H_
#define INC_TRAFFIC_CONTROL_H_

#include "global.h"

void setAll();
void clearAll();

void setRed1();
void setYellow1();
void setGreen1();

void setRed2();
void setYellow2();
void setGreen2();

void blinkRed();
void blinkYellow();
void blinkGreen();

#endif /* INC_TRAFFIC_CONTROL_H_ */
