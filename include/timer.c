#include "timer.h"
int timer_ticks = 0;

void timer_handler(struct regs *r) { timer_ticks++; }