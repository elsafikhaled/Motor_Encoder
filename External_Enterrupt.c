/*
 * External_Enterrupt.c
 *
 *  Created on: ١٣‏/٠٢‏/٢٠١٧
 *      Author: El-safi
 */
#include "External_Enterrupt.h"

void externalEnterrupt_init(void){
 MCUCR=(1<<ISC11)|(1<<ISC10); // rising edge sent interrupt request  for Int 1
 GICR=(1<<INT1);              // enable  external interrupt 1

}

