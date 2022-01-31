/*
 * LED.c
 *
 * Created: 30/03/2021 16:38:08
 *  Author: Ahmed
 */ 

#include "LED.h"
#include "DIO.h"


//LED0

void LED0_Init(void)
{
   DIO_SetPinDir(DIO_PORTB, DIO_PIN4, DIO_PIN_OUTPUT);
}

void LED0_On(void)
{
	DIO_SetPinValue(DIO_PORTB, DIO_PIN4 , DIO_PIN_HIGH);
}
void LED0_Off(void)
{
	DIO_SetPinValue(DIO_PORTB, DIO_PIN4 , DIO_PIN_LOW);	
}
void LED0_Toggle(void)
{
	DIO_TogglePin(DIO_PORTB, DIO_PIN4);
}

// LED1


void LED1_Init(void)
{
	DIO_SetPinDir(DIO_PORTB, DIO_PIN6, DIO_PIN_OUTPUT);
}

void LED1_On(void)
{
	DIO_SetPinValue(DIO_PORTB, DIO_PIN6 , DIO_PIN_HIGH);
}
void LED1_Off(void)
{
	DIO_SetPinValue(DIO_PORTB, DIO_PIN6 , DIO_PIN_LOW);
}
void LED1_Toggle(void)
{
	DIO_TogglePin(DIO_PORTB, DIO_PIN6);
}