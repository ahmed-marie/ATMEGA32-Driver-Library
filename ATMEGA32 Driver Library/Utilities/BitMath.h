/*
 * BitMath.h
 *
 * Created: 12/10/2023 18:11:51
 *  Author: ahmed
 */ 


#ifndef BITMATH_H_
#define BITMATH_H_

#define SET_BIT(REG,BIT) ((REG) |=  (1 << (BIT)))
#define CLR_BIT(REG,BIT) ((REG) &= ~(1 << (BIT)))
#define GET_BIT(REG,BIT) (((REG) >> (BIT)) & 1)
#define TOG_BIT(REG,BIT) ((REG) ^=  (1 << (BIT)))

#endif /* BITMATH_H_ */