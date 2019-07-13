#ifndef MAIN_H 
#define MAIN_H
	#include "init.h"
	#define CHANGE_LED_13() GPIO_ToggleBits(GPIOG, GPIO_Pin_13)
	#define CHANGE_LED_14() GPIO_ToggleBits(GPIOG, GPIO_Pin_14)
	//without lib
/*	#define LED_ON() GPIOG->ODR=0x6000
	#define LED_OFF() GPIOG->ODR=0x0*/
#endif 
