#ifndef INC_SOFTWARE_TIMER_H
#define INC_SOFTWARE_TIMER_H

extern int timer0_flag, timer0_counter;
extern int timer1_flag, timer1_counter;

#define TIMER_CYCLE 10;

void setTimer0(int duration);

void setTimer1(int duration);

void timer_run();

#endif //INC_SOFTWARE_TIMER_H
