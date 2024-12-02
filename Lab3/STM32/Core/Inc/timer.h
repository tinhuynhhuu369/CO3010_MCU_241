/*
 * timer.h
 *
 *  Created on: Nov 27, 2024
 *      Author: admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

#include "global.h"

extern int timer0_counter, timer0_flag;
extern int timer1_counter, timer1_flag;
extern int timer2_counter, timer2_flag;

#define TIMER_CYCLE 10;

void setTimer0(int duration);
void setTimer1(int duration);
void setTimer2(int duration);

void timerRun();

#endif /* INC_TIMER_H_ */
