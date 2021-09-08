/*
 * GPIO_MCAL.h
 *
 * Created: 06/04/2020 12:27:25 ص
 *  Author: Ahmed SemSem
 */ 

#define u8_Direction_input 0x00
//choose the default Initialization for GPIO
#define Init_direction_default  u8_Direction_input

#include "Data_type.h"
#include "std_macros.h"
#include "register.h"
#define Connect 1
#define NotConnected 0
#define OUTPUT 1
#define INPUT 0
#define HIGH 1
#define LOW 0
#ifndef GPIO_MCAL_H_
#define GPIO_MCAL_H_
//=================================Initialization=============================================

/* Initialization ports */
	void GPIO_voidInit(void);
//============================================================================================

//===================================PIN======================================================

	/*
	Function Name		 : GPIO_vsetPIN_DIR
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char pin number, unsigned char direction	
	Function Description : set the direction of the given pin in the given port (direction 0 = input : 1 = output)
	*/
		void GPIO_vsetPIN_DIR(u8 portnum, u8 pinnum, u8 dir);
	
	/*
	Function Name		 : GPIO_vwrite_PIN
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char pin number, unsigned char output value	
	Function Description : set the value of the given pin in the given port (output value  0 = low : 1 = high)
	*/
		void GPIO_vwrite_PIN(u8 portnum, u8 pinnum, u8 value);
		
	/*
	Function Name		 : GPIO_u8read_PIN
	Function Returns	 : unsigned char
	Function Arguments	 : unsigned char port name, unsigned char pin number	
	Function Description : Returns 1 if the value of the given pin is high and zero if the value is low
	*/
		u8 GPIO_u8read_PIN(u8 portnum, u8 pinnum);
	
	/*
	Function Name		 : GPIO_vtoggle_PIN
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char pin number	
	Function Description : Reverse the value of the given pin in the given port.
	*/
		void GPIO_vtoggle_PIN(u8 portnum, u8 pinnum);
		
	/*
	Function Name		 : GPIO_vconnectpullup
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char pin number, unsigned char connect_pullup	
	Function Description : connect and disconnect pull up resistor to the given pin in the given port
	*/
		void GPIO_vconnectpullup(u8 portnum, u8 pinnum, u8 connect_pullup);
		
//==============================================================================================

//=====================================PORT=====================================================

	/*
	Function Name		 : GPIO_vset_PORT_DIR
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char direction	
	Function Description : set the direction of whole port (direction 0 = input : 1 = output)
	*/
		void GPIO_vset_PORT_DIR(u8 portnum, u8 dir);
		
	/*
	Function Name		 : GPIO_vwrite_PORT
	Function Returns	 : void
	Function Arguments	 : unsigned char port name, unsigned char port value	
	Function Description : set the value of the whole port pins (output value  0 = low : 1 = high)
	*/
		void GPIO_vwrite_PORT(u8 portnum, u8 portvalue);
		
	/*
	Function Name		 : GPIO_read_PORT
	Function Returns	 : unsigned char
	Function Arguments	 : unsigned char port name	
	Function Description : read the value of the port
	*/
		u8 GPIO_read_PORT(u8 portnum);
		
	/*
	Function Name		 : GPIO_vtoggle_PORT
	Function Returns	 : void
	Function Arguments	 : unsigned char port name	
	Function Description : Reverse the value of the given port.
	*/
		void GPIO_vtoggle_PORT(u8 portnum);
		
//===========================================================================================

#endif /* GPIO_MCAL_H_ */