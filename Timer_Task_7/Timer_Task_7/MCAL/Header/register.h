/*
 * register.h
 *
 * Created: 05/04/2020 11:47:31 م
 *  Author: Ahmed SemSem
 */ 

#include "Data_type.h"
#ifndef REGISTER_H_
#define REGISTER_H_
//=============================== GPIO REGISTER ===================================
	/* PORT A */
	#define myPORTA		*((volatile unsigned char* const)0x3B)
	#define myDDRA		*((volatile unsigned char* const)0x3A)
	#define myPINA		*((volatile unsigned char* const)0x39)
	
	/* PORT B */
	#define myPORTB		*((volatile unsigned char* const)0x38)
	#define myDDRB		*((volatile unsigned char* const)0x37)
	#define myPINB		*((volatile unsigned char* const)0x36)
	
	/* PORT C */
	#define myPORTC		*((volatile unsigned char* const)0x35)
	#define myDDRC		*((volatile unsigned char* const)0x34)
	#define myPINC		*((volatile unsigned char* const)0x33)
	
	/* PORT D */
	#define myPORTD		*((volatile unsigned char* const)0x32)
	#define myDDRD		*((volatile unsigned char* const)0x31)
	#define myPIND		*((volatile unsigned char* const)0x30)
//================================================================================	

//=========================Timers Registers=======================================
/* Timer 1 */
#define mySFIOR  *((volatile unsigned char* const)0X50)
#define PUD     2
#define myADTS0 5
#define myADTS1 6
#define myADTS2 7
#define 			TCCR1A		(*(volatile u8*) (0X4F))
#define	TCCR1A_COM1A1            7
#define TCCR1A_COM1A0            6
#define TCCR1A_COM1B1            5
#define TCCR1A_COM1B0            4
#define TCCR1A_FOC1A             3
#define TCCR1A_FOC1B             2
#define TCCR1A_WGM11			 1
#define TCCR1A_WGM10			 0
#define 			TCCR1B		(*(volatile u8*) (0X4E))
#define TCCR1B_ICNC1             7
#define TCCR1B_ICES1             6
#define TCCR1B_WGM13             4
#define TCCR1B_WGM12             3
#define TCCR1B_CS12              2
#define TCCR1B_CS11			     1
#define TCCR1B_CS10			     0
#define 			TCNT1		(*(volatile u16*)(0X4C))
#define 			TCNT1H		(*(volatile u8*) (0X4D))
#define 			TCNT1L		(*(volatile u8*) (0X4C))
#define 			OCR1AH		(*(volatile u8*) (0X4B))
#define 			OCR1AL		(*(volatile u8*) (0X4A))
#define 			OCR1BH		(*(volatile u8*) (0X49))
#define 			OCR1BL		(*(volatile u8*) (0X48))
#define 			ICR1H		(*(volatile u8*) (0X47))
#define 			ICR1L		(*(volatile u8*) (0X46))

/* 			Timer 0 Register			*/
#define 			TCCR0		(*(volatile u8*) (0X53))
#define TCCR0_FOC0              7
#define TCCR0_WGM00             6
#define TCCR0_COM01             5
#define TCCR0_COM00             4
#define TCCR0_WGM01             3
#define TCCR0_CS02              2
#define TCCR0_CS01				1
#define TCCR0_CS00				0
#define 			TCNT0		(*(volatile u8*) (0X52))
#define 			OCR0		(*(volatile u8*) (0X5C))
/* 			Timer 2 Registers			*/
#define 			TCCR2		(*(volatile u8*) (0X45))
#define 			TCNT2		(*(volatile u8*) (0X44))
#define 			OCR2		(*(volatile u8*) (0X43))
/*				Timer Interrupt Register 	*/
#define 			TIMSK		(*(volatile u8*) (0X59))
#define TIMSK_TOIE0             0
#define TIMSK_OCIE0             1
#define TIMSK_TOIE1             2
#define TIMSK_OCIE1B            3
#define TIMSK_OCIE1A            4
#define TIMSK_TICIE             5
#define 			TIFR		(*(volatile u8*) (0X58))
#define TIFR_TOV0				0
#define TIFR_OCF0				1
#define TIFR_TOV1				2
#define TIFR_OCF1B				3
#define TIFR_OCF1A				4
#define TIFR_ICF1				5
#define TIFR_TOV2				6
#define TIFR_OCF2				7

/*					Global Interrupt Register		*/
#define 			SREG	    (*(volatile u8*) (0x5F))


#if (TIMER1_CTC_CHANNEL_A_INTERRUPT_INIT == ENABLE )
void __vector_7 (void ) __attribute__((signal)) ;
#endif

#if (TIMER1_CTC_CHANNEL_B_INTERRUPT_INIT == ENABLE )
void __vector_8 (void ) __attribute__((signal)) ;
#endif

#if (TIMER1_OVF_INTERRUPT_INIT == ENABLE )
void __vector_9 (void) __attribute__((signal)) ;
#endif

#if (COMPARE0_MATCH_INTERRUPT == ENABLE )
void __vector_10 (void ) __attribute__((signal)) ;
#endif

#if (TIMER0_OVERFLOW_INTERRUPT )
void __vector_11  (void ) __attribute__((signal)) ;
#endif


//================================================================================

//===============================EEPROM Registers=================================
	#define myEEARH		*((volatile unsigned char *const)0X3F)
	#define myEEARL		*((volatile unsigned char *const)0X3E)
	#define myEEDR		*((volatile unsigned char *const)0X3D)
	#define myEECR		*((volatile unsigned char *const)0X3C)
	
	/* EEPROM Control Register */
	#define myEERIE		3
	#define myEEMWE		2
	#define myEEWE		1
	#define myEERE		0
//================================================================================



//=========================ADC Registers==========================================
/* ADC Multiplexer Selection Register */
#define myADMUX  *((volatile unsigned char* const)0X27)
#define myMUX0  0
#define myMUX1  1
#define myMUX2  2
#define myMUX3  3
#define myMUX4  4
#define myADLAR 5
#define myREFS0 6
#define myREFS1 7
/* ADC Control and status Register A */
#define myADCSRA *((volatile unsigned char* const)0X26)
#define myADPS0  0
#define myADPS1  1
#define myADPS2  2
#define myADIE   3
#define myADIF   4
#define myADATE  5
#define myADSC   6
#define myADEN   7
/* ADC Data Registers */
#define myADCH   *((volatile unsigned char* const)0X25)
#define myADCL   *((volatile unsigned char* const)0X24)
//============================================================================
#endif /* REGISTER_H_ */