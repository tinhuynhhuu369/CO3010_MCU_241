/*
 * global.h
 *
 *  Created on: Nov 28, 2024
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "timer.h"
#include "traffic_control.h"
#include "main.h"
#include "7seg.h"
#include "fsm_automatic.h"
#include "fsm_manual.h"
#include "button.h"

#define YELLOW_TIME		2
#define GREEN_TIME		3
#define RED_TIME		5

#define NUM_OF_MODES	4

#define INIT 			0
#define MODE1			1
#define MODE2 			2
#define MODE3	 		3
#define MODE4			4

extern int redTime;
extern int yellowTime;
extern int greenTime;
extern int modeData;
extern int valueData;

extern int mode;
extern int state;

void initParams();

#endif /* INC_GLOBAL_H_ */
