/*
 * LED.h
 *
 * Created: 30/03/2021 16:38:26
 *  Author: Ahmed
 */ 


#ifndef LED_H_
#define LED_H_

#include "DIO.h"

typedef enum{
	LED_ERR,
	LED_OK
}LED_ERR_STATE;


void LED0_Init(void);

void LED0_On(void);

void LED0_Off(void);

void LED0_Toggle(void);

void LED1_Init(void);

void LED1_On(void);

void LED1_Off(void);

void LED1_Toggle(void);





#endif /* LED_H_ */