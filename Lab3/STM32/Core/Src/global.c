/*
 * global.c
 *
 *  Created on: Nov 28, 2024
 *      Author: admin
 */

#include "global.h"

int redTime;
int yellowTime;
int greenTime;

int modeData;
int valueData;

int mode = INIT;
int state = INIT;

void initParams() {
	redTime = RED_TIME;
	yellowTime = YELLOW_TIME;
	greenTime = GREEN_TIME;
	modeData = redTime;
	valueData = greenTime;
}
