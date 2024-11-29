/*
 * led_matrix.h
 *
 *  Created on: Nov 14, 2024
 *      Author: admin
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

#include "main.h"

extern uint8_t matrix_buffer[8];

void updateLEDMatrix(int index);
void setUpLEDMatrix();
void updateLEDMatrixBuffer(int num);
void shiftLeft();

#endif /* INC_LED_MATRIX_H_ */
