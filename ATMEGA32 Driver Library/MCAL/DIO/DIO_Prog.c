/*
 * DIO_prog.c
 *
 * Created: 12/10/2023 21:19:45
 *  Author: ahmed
 */ 

#include "DIO_Private.h"
#include "DIO_Config.h"
#include "DIO_Interface.h"

void MCAL_DIO_void_SetPinDirection(uint8_t PortPin, uint8_t PinDirection)
{
	uint8_t portNumber = PortPin / 10;
	uint8_t pinNumber = PortPin % 10;
	switch (PinDirection)
	{
		case INPUT:
			switch (portNumber)
			{
				case 1: CLR_BIT(DDRA_REG, pinNumber); break;
				case 2:	CLR_BIT(DDRB_REG, pinNumber); break;
				case 3:	CLR_BIT(DDRC_REG, pinNumber); break;
				case 4:	CLR_BIT(DDRD_REG, pinNumber); break;
				default:		break;
			}
			break;
		case OUTPUT:
			switch (portNumber)
			{
				case 1: SET_BIT(DDRA_REG, pinNumber); break;
				case 2:	SET_BIT(DDRB_REG, pinNumber); break;
				case 3:	SET_BIT(DDRC_REG, pinNumber); break;
				case 4:	SET_BIT(DDRD_REG, pinNumber); break;
				default:		break;
			}		
			break;
		
		default: break;
	}
	return;
}


void MCAL_DIO_void_SetPinValue(uint8_t PortPin, uint8_t PinValue)
{
	uint8_t portNumber = PortPin / 10;
	uint8_t pinNumber = PortPin % 10;
	switch (PinValue)
	{
		case LOW:
		switch (portNumber)
		{
			case 1: CLR_BIT(PORTA_REG, pinNumber); break;
			case 2:	CLR_BIT(PORTB_REG, pinNumber); break;
			case 3:	CLR_BIT(PORTC_REG, pinNumber); break;
			case 4:	CLR_BIT(PORTD_REG, pinNumber); break;
			default:		break;
		}
		break;
		case HIGH:
		switch (portNumber)
		{
			case 1: SET_BIT(PORTA_REG, pinNumber); break;
			case 2:	SET_BIT(PORTB_REG, pinNumber); break;
			case 3:	SET_BIT(PORTC_REG, pinNumber); break;
			case 4:	SET_BIT(PORTD_REG, pinNumber); break;
			default:		break;
		}
		break;
		
		default: break;
	}
	return;
}


uint8_t MCAL_DIO_uint8_GetPinValue(uint8_t PortPin)
{
	uint8_t portNumber = PortPin / 10;
	uint8_t pinNumber = PortPin % 10;
	uint8_t result = -1;
	switch(portNumber)
	{
		case 1: result = GET_BIT(PINA_REG,pinNumber); break;
		case 2: result = GET_BIT(PINB_REG,pinNumber); break;
		case 3: result = GET_BIT(PINC_REG,pinNumber); break;
		case 4: result = GET_BIT(PIND_REG,pinNumber); break;
		default: break;
	}
	return result;
}


void MCAL_DIO_void_TogPinValue(uint8_t PortPin)
{
	uint8_t portNumber = PortPin / 10;
	uint8_t pinNumber = PortPin % 10;
	switch(portNumber)
	{
		case 1: TOG_BIT(PORTA_REG,pinNumber); break;
		case 2: TOG_BIT(PORTB_REG,pinNumber); break;
		case 3: TOG_BIT(PORTC_REG,pinNumber); break;
		case 4: TOG_BIT(PORTD_REG,pinNumber); break;
		default: break;
	}
	return;
}

void MCAL_DIO_void_SetPinPullupRes(uint8_t PortPin, uint8_t PullUpPinState)
{
	// Here the function assumes that the PUD pin in SIFOR is unchanged (default 0) which means
	// that the general pull up resistors are not closed for all ports by default
	// Here the function assumes that the port is required as an input pin not an output one
	// Therefore when disabling the Pull up pin, the pin will be configured as input
	uint8_t portNumber = PortPin / 10;
	uint8_t pinNumber = PortPin % 10;	
	
	switch (PullUpPinState)
	{
		case PULLUP_ENABLE:
			switch (portNumber)
			{
				case 1:
					CLR_BIT(DDRA_REG,pinNumber);
					SET_BIT(PORTA_REG,pinNumber);
					break;
				case 2:
					CLR_BIT(DDRB_REG,pinNumber);
					SET_BIT(PORTB_REG,pinNumber);
					break;
				case 3:
					CLR_BIT(DDRC_REG,pinNumber);
					SET_BIT(PORTC_REG,pinNumber);
					break;
				case 4:
					CLR_BIT(DDRD_REG,pinNumber);
					SET_BIT(PORTD_REG,pinNumber);
					break;
				default: break;
			}
			break;
		case PULLUP_DISABLE:
			switch (portNumber)
			{
				case 1:
				CLR_BIT(DDRA_REG,pinNumber);
				CLR_BIT(PORTA_REG,pinNumber);
				break;
				case 2:
				CLR_BIT(DDRB_REG,pinNumber);
				CLR_BIT(PORTB_REG,pinNumber);
				break;
				case 3:
				CLR_BIT(DDRC_REG,pinNumber);
				CLR_BIT(PORTC_REG,pinNumber);
				break;
				case 4:
				CLR_BIT(DDRD_REG,pinNumber);
				CLR_BIT(PORTD_REG,pinNumber);
				break;
				default: break;
			}
			break;
		default: break;
	}
}

void MCAL_DIO_void_SetPortDirection(uint8_t PortNumber, uint8_t PortDirections)
{
	switch (PortNumber)
	{
		case PORTA: DDRA_REG = PortDirections; break;
		case PORTB: DDRB_REG = PortDirections; break;
		case PORTC: DDRC_REG = PortDirections; break;
		case PORTD: DDRD_REG = PortDirections; break;	
		default: break;
	}
}


void MCAL_DIO_void_SetPortValue(uint8_t PortNumber, uint8_t PortValues)
{
	switch (PortNumber)
	{
		case PORTA: PORTA_REG = PortValues; break;
		case PORTB: PORTB_REG = PortValues; break;
		case PORTC: PORTC_REG = PortValues; break;
		case PORTD: PORTD_REG = PortValues; break;
		default: break;
	}

}


uint8_t MCAL_DIO_uint8_GetPortValue(uint8_t PortNumber)
{
	uint8_t result = 0;
	switch (PortNumber)
	{
		case PORTA: result = PINA_REG; break;
		case PORTB: result = PINB_REG; break;
		case PORTC: result = PINC_REG; break;
		case PORTD: result = PIND_REG; break;
		default: break;
	}
	return result;
}