
/*
 * TIMER_Private.h
 *
 * Created: 19/12/2023 12:43:25
 *  Author: ahmed
 */ 


// Timer General registers

#define TIMSK_REG		(*((volatile uint8_t*) 0x59))  // Timer / Counter Interrupt Mask Register
#define TIFR_REG		(*((volatile uint8_t*) 0x58))  // Timer / Counter Interrupt Flag Register

// Timer 0 Registers

#define TCCR0_REG		(*((volatile uint8_t*) 0x53))
#define TCNT0_REG		(*((volatile uint8_t*) 0x52))
#define OCR0_REG		(*((volatile uint8_t*) 0x5C))

// Timer 0 bits in TIMISK_REG

#define OCIE0_BIT		1  // Timer/Counter0 Output Match Interrupt Enable
#define TOIE0_BIT		0  // Timer/Counter0 Output Match Interrupt Enable

// Timer 0 bits in TIFR_REG

#define OCF0_BIT		1  // Timer/Counter0 Output Match Interrupt Flag
#define TOV0_BIT		0  // Timer/Counter0 Output Match Interrupt Flag


// Timer 1 Registers

#define TCCR1A_REG		(*((volatile uint8_t*) 0x4F))
#define TCCR1B_REG		(*((volatile uint8_t*) 0x4E))
#define TCNT1H_REG		(*((volatile uint8_t*) 0x4D))
#define TCNT1L_REG		(*((volatile uint8_t*) 0x4C))
#define OCR1AH_REG		(*((volatile uint8_t*) 0x4B))
#define OCR1AL_REG		(*((volatile uint8_t*) 0x4A))
#define OCR1BH_REG		(*((volatile uint8_t*) 0x49))
#define OCR1BL_REG		(*((volatile uint8_t*) 0x48))


// Timer 1 bits in TIMISK_REG

#define TICIE1_BIT		5  // Timer/Counter2 Output Match Interrupt Enable
#define OCIE1A_BIT		4  // Timer/Counter2 Output Match Interrupt Enable
#define OCIE1B_BIT		3  // Timer/Counter2 Output Match Interrupt Enable
#define TOIE1_BIT		2  // Timer/Counter2 Output Match Interrupt Enable

// Timer 1 bits in TIFR_REG

#define ICF1_BIT		5  // Timer/Counter2 Output Match Interrupt Flag
#define OCF1A_BIT		4  // Timer/Counter2 Output Match Interrupt Flag
#define OCF1B_BIT		3  // Timer/Counter2 Output Match Interrupt Flag
#define TOV1_BIT		2  // Timer/Counter2 Output Match Interrupt Flag


// Timer 2 Registers

#define TCCR2_REG		(*((volatile uint8_t*) 0x45))
#define TCNT2_REG		(*((volatile uint8_t*) 0x44))
#define OCR2_REG		(*((volatile uint8_t*) 0x43))
#define ASSR_REG		(*((volatile uint8_t*) 0x42))

// Timer 2 bits in TIMISK_REG

#define OCIE2_BIT		7  // Timer/Counter2 Output Match Interrupt Enable
#define TOIE2_BIT		6  // Timer/Counter2 Output Match Interrupt Enable

// Timer 2 bits in TIFR_REG

#define OCF2_BIT		7  // Timer/Counter2 Output Match Interrupt Flag
#define TOV2_BIT		6  // Timer/Counter2 Output Match Interrupt Flag




