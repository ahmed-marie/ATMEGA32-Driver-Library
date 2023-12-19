
/*
 * TIMER_Interface.h
 *
 * Created: 19/12/2023 12:42:19
 *  Author: ahmed
 */ 

// defines

#define TIMER0_CHANNEL 0
#define TIMER1_CHANNEL 1
#define TIMER2_CHANNEL 2




void MCAL_Timer_void_TimerInit(uint8_t Timer_Channel);
void MCAL_Timer_void_TimerSetTime(uint8_t Timer_Channel, uint32_t DesiredTime);
void MCAL_Timer_void_TimerStart(uint8_t Timer_Channel);
void MCAL_Timer_void_TimerStop(uint8_t Timer_Channel);
void MCAL_Timer_void_SetCallBack(uint8_t Timer_Channel, void(*functionPointer)(void));

void MCAL_Timer_void_PWMInit(uint8_t Timer_Channel);
void MCAL_Timer_void_PWMSetDutyCycle(uint8_t Timer_Channel, float duty_cycle);
void MCAL_Timer_void_PWMStart(uint8_t Timer_Channel);
void MCAL_Timer_void_PWMStop(uint8_t Timer_Channel);

void MCAL_TIMER_void_ICUInit(void);
