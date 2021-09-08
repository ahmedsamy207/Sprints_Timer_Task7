/*
 * Timer.h
 *
 * Created: 9/2/2021 5:22:49 PM
 *  Author: Ahmed SemSem
 */ 
#include "Data_type.h"
#include "std_macros.h"
#include "Register.h"
#include "Timer_config.h"
#define 		NO_CLK						0
#define 		NO_PRESCALING				1
#define 		CLK_DIV_BY_8				2
#define 		CLK_DIV_BY_64				3
#define 		CLK_DIV_BY_256				4
#define 		CLK_DIV_BY_1024				5
#define 		EX_CLK_FALLING				6
#define 		EX_CLK_RISING				7

#define			OVERFLOW					0
#define			OUTPUT_COMPARE_0			1
#define			OUTPUT_COMPARE_A			2
#define			OUTPUT_COMPARE_B			3


#ifndef TIMER_H_
#define TIMER_H_

/********** Timer Interface  **********/
	void TMR_voidInit (void) ;
	s8  TMR_s8SetTCNT(u16 copy_u16Time);
	s8  TMR_s8CheckFlag(u8 copy_u8Flag);
	void TMR_voidClearFlag(void);
	void TMR_voidEnableGIE (void);
	void TMR_voidDisableGIE (void);
	
/******************* ISR  ***************/

	void TMR_voidSetCallBack(void (*ptrfunc)(void ));
	




#endif /* TIMER_H_ */