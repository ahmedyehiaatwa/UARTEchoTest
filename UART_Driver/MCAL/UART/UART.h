/*
 * UART.h
 *
 *  Author: Ahmed
 */ 


#ifndef UART_H_
#define UART_H_

#include "Atmega32.h"
#include "Typedef.h"
#include "BIT_Math.h"


void UART_Init(void);

void UART_Tx(uint8_t data);

void UART_TxString (uint8_t* str);

uint8_t UART_Rx(uint8_t * data);

uint8_t UART_RxString(uint8_t * str);







#endif /* UART_H_ */