/*
 * Timer_config.h
 *
 * Created: 9/2/2021 5:33:44 PM
 *  Author: Ahmed SemSem
 */ 


#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_
#define		TIMER0              DISABLE
#define		TIMER1              ENABLE

/*
Options 
		NORMAL
		PWM_PHASE_CORRECT
		CTC
		FAST_PWM
*/
#define 	TIMER0_MODE					NORMAL

/* Timer 1 Mode Config */
/* Options = NORMAL
			 FAST_PWM
			 CTC */

#define      TIMER1_MODE             NORMAL

		/* Timer 0 Interrupt */ 
#define 	TIMER0_OVERFLOW_INTERRUPT		DISABLE
#define 	COMPARE0_MATCH_INTERRUPT 		DISABLE
		/* Timer 1 Interrupt	*/
		
#define TIMER1_OVF_INTERRUPT_INIT              DISABLE
#define TIMER1_CTC_CHANNEL_A_INTERRUPT_INIT    DISABLE
#define TIMER1_CTC_CHANNEL_B_INTERRUPT_INIT    DISABLE

	/* 
		Options
			NO_CLK
			NO_PRESCALING
			CLK_DIV_BY_8
			CLK_DIV_BY_64
			CLK_DIV_BY_256
			CLK_DIV_BY_1024
			EX_CLK_FALLING
			EX_CLK_RISING
		*/
#define 	TIMER0_CLOCK_SELECT					CLK_DIV_BY_8

	/* 
		Options
			NO_CLK
			NO_PRESCALING
			CLK_DIV_BY_8
			CLK_DIV_BY_64
			CLK_DIV_BY_256
			CLK_DIV_BY_1024
			EX_CLK_FALLING
			EX_CLK_RISING
		*/
#define 	TIMER1_CLOCK_SELECT					CLK_DIV_BY_64
#define			NORMAL					0
#define			PWM_PHASE_CORRECT		1
#define			CTC						2
#define			FAST_PWM				3

#define 		ENABLE					1
#define 		DISABLE					0
#endif /* TIMER_CONFIG_H_ */