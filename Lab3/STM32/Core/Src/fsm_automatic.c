/*
 * fsm_automatic.c
 *
 *  Created on: Nov 29, 2024
 *      Author: admin
 */
#include "fsm_automatic.h"

int positon_7seg = 0;
int tempValRed;
int flag_Red;
int tempValYellow;
int flag_Yellow;
int tempValGreen;
int flag_Green;

void fsm_automatic() {
	switch (mode) {
		case INIT:
			update7SEG(positon_7seg, modeData, valueData);
			setTimer0(500);
			tempValRed = redTime;
			tempValYellow = yellowTime;
			tempValGreen = greenTime;
			flag_Red = 0;
			flag_Yellow = 0;
			flag_Green = 0;
			mode = MODE1;
			positon_7seg = (positon_7seg + 1) % 2;
			break;
		case MODE1:
			fsm_manual();
			if(timer0_flag == 1) {
				update7SEG(positon_7seg, modeData, valueData);
				positon_7seg = (positon_7seg + 1) % 2;
				setTimer0(500);
			}

			if(isButtonPressed(BUTTON_1_PRESS) == 1) {
				modeData = MODE2;
				valueData = tempValRed;
				mode = MODE2;
				clearAll();
				setTimer0(500);
			}
			break;
		case MODE2:
			if(timer0_flag == 1) {
				update7SEG(positon_7seg, modeData, valueData);
				positon_7seg = (positon_7seg + 1) % 2;
				blinkRed();
				setTimer0(500);
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				modeData = MODE3;
				valueData = tempValYellow;
				mode = MODE3;
				clearAll();
				setTimer2(500);
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempValRed > 99) {
					tempValRed = 1;
				}
				tempValRed++;
				valueData = tempValRed;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				flag_Red = 1;
			}
			break;
		case MODE3:
			if (timer0_flag == 1) {
				update7SEG(positon_7seg, modeData, valueData);
				positon_7seg = (positon_7seg + 1) % 2;
				blinkYellow();
				setTimer0(500);
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				modeData = MODE4;
				valueData = tempValGreen;
				mode = MODE4;
				clearAll();
				setTimer2(500);
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempValYellow > 99) {
					tempValYellow = 1;
				}
				tempValYellow++;
				valueData = tempValYellow;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				flag_Yellow = 1;
			}
			break;
		case MODE4:
			if (timer0_flag == 1) {
				update7SEG(positon_7seg, modeData, valueData);
				positon_7seg = (positon_7seg + 1) % 2;
				blinkGreen();
				setTimer0(500);
			}
			if (isButtonPressed(BUTTON_1_PRESS) == 1) {
				if (tempValRed == tempValGreen + tempValYellow) {
					if (flag_Red == 1) redTime = tempValRed;
					if (flag_Yellow == 1) yellowTime = tempValYellow;
					if (flag_Green == 1) greenTime = tempValGreen;
				}
				state = INIT;
				mode = INIT;
				clearAll();
				setTimer2(500);
			}
			if (isButtonPressed(BUTTON_2_PRESS) == 1) {
				if (tempValGreen > 99) {
					tempValGreen = 1;
				}
				tempValGreen++;
				valueData = tempValGreen;
			}
			if (isButtonPressed(BUTTON_3_PRESS) == 1) {
				flag_Green = 1;
			}
			break;
		default:
			break;
	}
}
