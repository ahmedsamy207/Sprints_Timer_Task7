/*
 * std_macros.h
 *
 * Created: 05/04/2020 11:41:10 م
 *  Author: Ahmed SemSem
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_

	#define SET_BIT(reg,bit) reg|=(1<<bit)
	#define CLR_BIT(reg,bit) reg&=(~(1<<bit))
	#define TOGGLE_BIT(reg,bit) reg^=(1<<bit)
	#define READ_BIT(reg,bit) ((reg&(1<<bit))>>bit)
	#define IS_BIT_CLR(reg,bit) !((reg&(1<<bit))>>bit) 

#endif /* STD_MACROS_H_ */