/*
 * ATMEGA32 Driver Library.c
 *
 * Created: 12/10/2023 18:05:34
 * Author : ahmed
 */ 

//#include <avr/io.h>

#include "STD.h"
#include "main.h"

// LED Pins for the AMIT board

// led0 portc2, led1 portc7, led2 portd3
/*
int main(void)
{
    // Replace with your application code 
	
	MCAL_DIO_void_SetPinDirection(PA0_PIN, OUTPUT); //PORTA0 PIN
	MCAL_DIO_void_SetPinDirection(PA1_PIN, OUTPUT); //PORTA1 PIN
	MCAL_DIO_void_SetPinDirection(PA2_PIN, OUTPUT); //PORTA2 PIN
	MCAL_DIO_void_SetPinDirection(PA3_PIN, OUTPUT); //PORTA3 PIN
	MCAL_DIO_void_SetPinDirection(PA4_PIN, OUTPUT); //PORTA4 PIN
	MCAL_DIO_void_SetPinDirection(PA5_PIN, OUTPUT); //PORTA5 PIN
	MCAL_DIO_void_SetPinDirection(PA6_PIN, OUTPUT); //PORTA6 PIN
	MCAL_DIO_void_SetPinDirection(PA7_PIN, OUTPUT); //PORTA7 PIN
	
	MCAL_DIO_void_SetPinDirection(PB0_PIN, OUTPUT); //PORTA0 PIN
	MCAL_DIO_void_SetPinDirection(PB1_PIN, OUTPUT); //PORTA1 PIN
	MCAL_DIO_void_SetPinDirection(PB2_PIN, OUTPUT); //PORTA2 PIN
	MCAL_DIO_void_SetPinDirection(PB3_PIN, OUTPUT); //PORTA3 PIN
	MCAL_DIO_void_SetPinDirection(PB4_PIN, OUTPUT); //PORTA4 PIN
	MCAL_DIO_void_SetPinDirection(PB5_PIN, OUTPUT); //PORTA5 PIN
	MCAL_DIO_void_SetPinDirection(PB6_PIN, OUTPUT); //PORTA6 PIN
	MCAL_DIO_void_SetPinDirection(PB7_PIN, OUTPUT); //PORTA7 PIN
	
	MCAL_DIO_void_SetPinDirection(PC0_PIN, OUTPUT); //PORTA0 PIN
	MCAL_DIO_void_SetPinDirection(PC1_PIN, OUTPUT); //PORTA1 PIN
	MCAL_DIO_void_SetPinDirection(PC2_PIN, OUTPUT); //PORTA2 PIN
	MCAL_DIO_void_SetPinDirection(PC3_PIN, OUTPUT); //PORTA3 PIN
	MCAL_DIO_void_SetPinDirection(PC4_PIN, OUTPUT); //PORTA4 PIN
	MCAL_DIO_void_SetPinDirection(PC5_PIN, OUTPUT); //PORTA5 PIN
	MCAL_DIO_void_SetPinDirection(PC6_PIN, OUTPUT); //PORTA6 PIN
	MCAL_DIO_void_SetPinDirection(PC7_PIN, OUTPUT); //PORTA7 PIN
	
	MCAL_DIO_void_SetPinDirection(PD0_PIN, OUTPUT); //PORTA0 PIN
	MCAL_DIO_void_SetPinDirection(PD1_PIN, OUTPUT); //PORTA1 PIN
	MCAL_DIO_void_SetPinDirection(PD2_PIN, OUTPUT); //PORTA2 PIN
	MCAL_DIO_void_SetPinDirection(PD3_PIN, OUTPUT); //PORTA3 PIN
	MCAL_DIO_void_SetPinDirection(PD4_PIN, OUTPUT); //PORTA4 PIN
	MCAL_DIO_void_SetPinDirection(PD5_PIN, OUTPUT); //PORTA5 PIN	
	MCAL_DIO_void_SetPinDirection(PD6_PIN, OUTPUT); //PORTA6 PIN	
	MCAL_DIO_void_SetPinDirection(PD7_PIN, OUTPUT); //PORTA7 PIN
	
    while (1) 
    {
		uint8_t portpins[4] = {PA0_PIN, PB0_PIN, PC0_PIN, PD0_PIN};
		int i;
		for(i = 0; i < 4; i++)
		{
			uint8_t pin;
			for(pin = portpins[i]; pin <= portpins[i] + 7; pin++)
			{
				MCAL_DIO_void_TogPinValue(pin); // turn on
				_delay_ms(1000);
				MCAL_DIO_void_TogPinValue(pin); // turn off
				_delay_ms(1000);
			
			}
		}
    }
}
*/


int main(void)
{
	MCAL_DIO_void_SetPortDirection(PORTD, 0); 
	MCAL_DIO_void_SetPortDirection(PORTA, 0xFF); //PORTA PINS
	while(1)
	{
		MCAL_DIO_void_SetPortValue(PORTA, MCAL_DIO_uint8_GetPortValue(PORTD));
	}
}


//void MCAL_DIO_void_SetPortDirection(uint8_t PortNumber, uint8_t PortDirections);
//void MCAL_DIO_void_SetPortValue(uint8_t PortNumber, uint8_t PortValues);
//uint8_t MCAL_DIO_uint8_GetPortValue(uint8_t PortNumber);
