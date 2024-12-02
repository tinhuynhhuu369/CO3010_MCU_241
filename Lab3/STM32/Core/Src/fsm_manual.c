/*
 * fsm_manual.c
 *
 *  Created on: Nov 29, 2024
 *      Author: admin
 */
#include "fsm_manual.h"

void fsm_manual() {
	switch (state) {
		case 0:
			setTimer1(1000);
			modeData = redTime;
			valueData = greenTime;
			setRed1();
			setGreen2();
			state++;
			break;
		case 1:
			if (timer1_flag == 1) {
				modeData--;
				valueData--;
				setTimer1(1000);
			}
			if (valueData == 0) {
				valueData = yellowTime;
				setYellow2();
				state++;
			}
			break;
		case 2:
			if (timer1_flag == 1) {
				modeData--;
				valueData--;
				setTimer1(1000);
			}
			if ((modeData == 0) && (valueData == 0)) {
				modeData = greenTime;
				valueData = redTime;
				setGreen1();
				setRed2();
				state++;
			}
			break;
		case 3:
			if (timer1_flag == 1) {
				modeData--;
				valueData--;
				setTimer1(1000);
			}
			if (modeData == 0){
				modeData = yellowTime;
				setYellow1();
				state++;
			}
			break;
		case 4:
			if (timer1_flag == 1) {
				modeData--;
				valueData--;
				setTimer1(1000);
			}
			if ((modeData == 0) && (valueData == 0)) {
				modeData = redTime;
				valueData = greenTime;
				setRed1();
				setGreen2();
				state = 0;
			}
			break;
		default:
			break;
	}
}
