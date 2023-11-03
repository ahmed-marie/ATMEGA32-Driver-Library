/*
 * DIO_private.h
 *
 * Created: 12/10/2023 21:20:20
 *  Author: ahmed
 */ 


#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

#ifndef STD_H_
#include "STD.h" 
#endif 


// Here the register addresses will be written

// PORTA registers

#define PORTA_REG (*((volatile uint8_t*) 0x3B))
#define DDRA_REG  (*((volatile uint8_t*) 0x3A))
#define PINA_REG  (*((volatile uint8_t*) 0x39))

// PORTB registers

#define PORTB_REG (*((volatile uint8_t*) 0x38))
#define DDRB_REG  (*((volatile uint8_t*) 0x37))
#define PINB_REG  (*((volatile uint8_t*) 0x36))


// PORTC registers

#define PORTC_REG (*((volatile uint8_t*) 0x35))
#define DDRC_REG  (*((volatile uint8_t*) 0x34))
#define PINC_REG  (*((volatile uint8_t*) 0x33))

// PORTD registers

#define PORTD_REG (*((volatile uint8_t*) 0x32))
#define DDRD_REG  (*((volatile uint8_t*) 0x31))
#define PIND_REG  (*((volatile uint8_t*) 0x30))


// SFIOR register

#define SIFOR_REG (*((volatile uint8_t*) 0x50))

#define PUD_BIT 2




#endif /* DIO_PRIVATE_H_ */