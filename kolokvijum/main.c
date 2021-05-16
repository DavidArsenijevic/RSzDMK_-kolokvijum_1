/**
 * @file main.c
 * @brief kolok zadatak
 * @author David Arsenijevic EE195/2018
 * @date 16-05-2021
 * @version 1.0
 */

#include "arrays.h"
#include "../usart/usart.h"
#include "../pin/pin.h"
#include <stdio.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <util/delay.h>



main()
{
	int8_t number;		// prvi element niza
	int8_t razlika;
	int8_t n;
	int8_t n_element;    //n-ti element
	int8_t milisekunde;
	int8_t period = 1000;
	int8_t str[64];


	usartInit(9600);
	while(1)
	{
		usartPutString("Unesite prvi element niza ");
		while(!usartAvailable())
		;
		_delay_ms(100);

		// unosenje prvog elementa
		number = usartParseInt();
		sprintf(str,"%d \0",number);
		usartPutString(str);

		usartPutString("razlika:");
		while(!usartAvailable())
		;
		_delay_ms(100);

		// unosenje razlike
		razlika = usartParseInt();
		sprintf(str,"%d \0",razlika);
		usartPutString(str);

		usartPutString("n:");
		while(!usartAvailable())
		;
		_delay_ms(100);

		// unosenje n
		n = usartParseInt();
		sprintf(str,"%d \0",n);
		usartPutString(str);

		usartPutString("\r\n");

		// unosenje n-tog elementa
		usartPutString("n-ti element:");
		while(!usartAvailable())
		;
		_delay_ms(100);

		// unosenje n
		n_element = usartParseInt();
		sprintf(str,"%d \0",n_element);
		usartPutString(str);

		//timer0InteruptInit(period/2);


	}



return 0;
}
