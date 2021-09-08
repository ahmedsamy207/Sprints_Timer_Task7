/*
 * Application.c
 *
 * Created: 03/09/2021 11:19:26 م
 *  Author: Ahmed SemSem
 */ 
#include "../HAL/Header/LED_driver_ECU.h"
#include "../MCAL/Header/Timer.h"
/* define CPU Clock Cycle To 2 MHZ */
#define F_CPU 2000000UL

int main(void)
{
	LED_vinitialize('A',0);
	LED_vTurnoff('A',0);
	/* CAll Timer Initialization With
	* Normal Mode
	* Timer 1
	* 64 Prescaler
	* No Interrupt */
	TMR_voidInit();
	while(1)
    {
/* First Turn ON LED at PORTA */
		LED_vTurnon('A',0);
/* Adjust TCNT Register to Overflow after 300 ms */
		TMR_s8SetTCNT(56161);/*(2^16(timer resolution))-(.3Sec/(64(Prescaler)/2000000Hz)) = 56161*/
/* Check if the Overflow Flag raised */
		TMR_s8CheckFlag(OVERFLOW);
/* Clear overflow flag */
		TMR_voidClearFlag();
/* After 300 ms Turn OFF The Led */
		LED_vTurnoff('A',0);
/* Adjust TCNT Register to Overflow after 500 ms */
		TMR_s8SetTCNT(49911);/*(2^16(timer resolution))-(.5Sec/(64(Prescaler)/2000000Hz)) = 49911*/
/* Check if the Overflow Flag raised */
		TMR_s8CheckFlag(OVERFLOW);
/* Clear overflow flag */
		TMR_voidClearFlag();
	}
}