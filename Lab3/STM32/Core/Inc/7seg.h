/*
 * 7seg.h
 *
 *  Created on: Nov 28, 2024
 *      Author: admin
 */

#ifndef INC_7SEG_H_
#define INC_7SEG_H_

#include "global.h"

void display7SEG_Mode();
void display7SEG_Value();

void update7SEG(int position, int modeData, int valueData);

#endif /* INC_7SEG_H_ */
