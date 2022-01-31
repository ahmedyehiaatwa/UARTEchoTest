/*
 * UART_Driver.c
 *
 * Author : Ahmed
 */ 

#include "LCD.h"
#include "UART.h"



int main(void)
{
    
	
	UART_Init();
	
	uint8_t strtest[256];
	
    while (1) 
    {
		UART_RxString(strtest);
		UART_TxString(strtest);
    }
}

