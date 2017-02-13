/*
 * PWM1_EKE.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: El-safi
 */
#include "PWM1_EKE.h"

void PWM1_EKE_init(void)
{
  TCCR1A=(1<<COM1B1)|(1<<WGM11);
  TCCR1A&=~(1<<FOC1B);
  TCCR1B=(1<<WGM12)|(1<<WGM13)|(1<<CS10)|(1<<CS12);
  TCNT1=0;
  ICR1=255;


}


void PWM1_EKE_duty(U16_t duty)
{

  OCR1B=duty;


}



void PWM1_EKE_start(void)
{

	OCR1B=0;

}

void PWM1_EKE_stop(void)
{

  TCCR1B=0;

}


