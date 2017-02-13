/*
 * Timer0.c
 *
 *  Created on: ٣١‏/٠١‏/٢٠١٧
 *      Author: El-safi
 */
#include "Timer0.h"

void timer0_interrupt_init(void){

	TCCR0=(1<<CS00)|(1<<CS02); //1024 prescaler / normal mode
	TCNT0=0;
    TIMSK=(1<<TOIE0);                    //enable overflow interrupt


}








