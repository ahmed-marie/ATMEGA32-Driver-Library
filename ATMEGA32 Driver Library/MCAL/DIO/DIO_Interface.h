/*
 * DIO_Interface.h
 *
 * Created: 12/10/2023 21:20:37
 *  Author: ahmed
 */ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

#include "STD.h"
#include "BitMath.h"

#include "DIO_Config.h"
#include "DIO_Private.h"

/*--------------------------------------------------------------------------------------------*/
/*   Defines   */
/*--------------------------------------------------------------------------------------------*/


#define PA0_PIN     10
#define PA1_PIN     11
#define PA2_PIN     12
#define PA3_PIN     13
#define PA4_PIN     14
#define PA5_PIN     15
#define PA6_PIN     16
#define PA7_PIN     17

#define PB0_PIN     20
#define PB1_PIN     21
#define PB2_PIN     22
#define PB3_PIN     23
#define PB4_PIN     24
#define PB5_PIN     25
#define PB6_PIN     26
#define PB7_PIN     27

#define PC0_PIN     30
#define PC1_PIN     31
#define PC2_PIN     32
#define PC3_PIN     33
#define PC4_PIN     34
#define PC5_PIN     35
#define PC6_PIN     36
#define PC7_PIN     37

#define PD0_PIN     40
#define PD1_PIN     41
#define PD2_PIN     42
#define PD3_PIN     43
#define PD4_PIN     44
#define PD5_PIN     45
#define PD6_PIN     46
#define PD7_PIN     47

#define PORTA       1
#define PORTB       2
#define PORTC       3
#define PORTD       4

#define INPUT  0
#define OUTPUT 1

#define LOW 0
#define HIGH 1

#define PULLUP_DISABLE 0
#define PULLUP_ENABLE 1


// functions for single pins
void MCAL_DIO_void_SetPinDirection(uint8_t PortPin, uint8_t PinDirection);
void MCAL_DIO_void_SetPinValue(uint8_t PortPin, uint8_t PinValue);
uint8_t MCAL_DIO_uint8_GetPinValue(uint8_t PortPin);
void MCAL_DIO_void_TogPinValue(uint8_t PortPin);
void MCAL_DIO_void_SetPinPullupRes(uint8_t PortPin, uint8_t PullUpPinState);

// functions for ports
void MCAL_DIO_void_SetPortDirection(uint8_t PortNumber, uint8_t PortDirections);
void MCAL_DIO_void_SetPortValue(uint8_t PortNumber, uint8_t PortValues);
uint8_t MCAL_DIO_uint8_GetPortValue(uint8_t PortNumber);




#endif /* DIO_INTERFACE_H_ */