/*
 * GPIO_MCAL.c
 *
 * Created: 06/04/2020 08:00:59 م
 *  Author: Ahmed SemSem
 */ 
#include "../Header/GPIO_MCAL.h"

//====================================================Initialization===========================================

void GPIO_voidInit(void){
	 /* DDR Initialization*/
	myDDRA = Init_direction_default;
	myDDRB = Init_direction_default;
	myDDRC = Init_direction_default;
	myDDRD = Init_direction_default;
}
//==============================================================================================================

//=================================================PIN==========================================================

void GPIO_vsetPIN_DIR(u8 portnum, u8 pinnum, u8 dir){
	switch (portnum){
		case 'A' :
		case 'a' :
			if(dir == 1){
				SET_BIT(myDDRA,pinnum);
			}else{
				CLR_BIT(myDDRA,pinnum);
			}
			break;
		case 'B' :
		case 'b' :
			if(dir == 1){
				SET_BIT(myDDRB,pinnum);
			}else{
				CLR_BIT(myDDRB,pinnum);
			}
			break;
		case 'C' :
		case 'c' :
			if(dir == 1){
				SET_BIT(myDDRC,pinnum);
			}else{
				CLR_BIT(myDDRC,pinnum);
			}
			break;
		case 'D' :
		case 'd' :
			if(dir == 1){
				SET_BIT(myDDRD,pinnum);
			}else{
				CLR_BIT(myDDRD,pinnum);
			}
			break;
		default: break;	
	}
}

//====================================================================================================

void GPIO_vwrite_PIN(u8 portnum, u8 pinnum, u8 value){
	switch (portnum){
		case 'A' :
		case 'a' :
		if(value == 1){
			SET_BIT(myPORTA,pinnum);
			}else{
			CLR_BIT(myPORTA,pinnum);
		}
		break;
		case 'B' :
		case 'b' :
		if(value == 1){
			SET_BIT(myPORTB,pinnum);
			}else{
			CLR_BIT(myPORTB,pinnum);
		}
		break;
		case 'C' :
		case 'c' :
		if(value == 1){
			SET_BIT(myPORTC,pinnum);
			}else{
			CLR_BIT(myPORTC,pinnum);
		}
		break;
		case 'D' :
		case 'd' :
		if(value == 1){
			SET_BIT(myPORTD,pinnum);
			}else{
			CLR_BIT(myPORTD,pinnum);
		}
		break;
		default: break;
	}
}

//======================================================================================================

u8 GPIO_u8read_PIN(u8 portnum, u8 pinnum){
	u8 Value=0;
	switch (portnum){
		case 'A' :
		case 'a' :
			Value = READ_BIT(myPINA,pinnum);
			break;
		case 'B' :
		case 'b' :
			Value = READ_BIT(myPINB,pinnum);
			break;
		case 'C' :
		case 'c' :
			Value = READ_BIT(myPINC,pinnum);
			break;
		case 'D' :
		case 'd' :
			Value = READ_BIT(myPIND,pinnum);
			break;
		default: break;
	}
	return Value;
}

//===================================================================================================

void GPIO_vtoggle_PIN(u8 portnum, u8 pinnum){
	switch (portnum){
		case 'A' :
		case 'a' :
			TOGGLE_BIT(myPORTA,pinnum);
		break;
		case 'B' :
		case 'b' :
			TOGGLE_BIT(myPORTB,pinnum);
		break;
		case 'C' :
		case 'c' :
			TOGGLE_BIT(myPORTC,pinnum);
		break;
		case 'D' :
		case 'd' :
			TOGGLE_BIT(myPORTD,pinnum);
		break;
		default: break;
	}
}

//=====================================================================================================


//=====================================================================================================

//=======================================PORT==========================================================

void GPIO_vset_PORT_DIR(u8 portnum, u8 dir){
	switch (portnum){
		case 'A' :
		case 'a' :
			myDDRA = dir;
			break;
		case 'B' :
		case 'b' :
			myDDRB = dir;
			break;
		case 'C' :
		case 'c' :
			myDDRC = dir;
			break;
		case 'D' :
		case 'd' :
			myDDRD = dir;
			break;
		default: break;
	}
}

//========================================================================================================

void GPIO_vwrite_PORT(u8 portnum, u8 portvalue){
	switch (portnum){
		case 'A' :
		case 'a' :
			myPORTA = portvalue;
			break;
		case 'B' :
		case 'b' :
			myPORTB = portvalue;
			break;
		case 'C' :
		case 'c' :
			myPORTC = portvalue;
			break;
		case 'D' :
		case 'd' :
			myPORTD = portvalue;
			break;
		default: break;
	}	
}

//=========================================================================================================

void GPIO_vtoggle_PORT(u8 portnum){
	switch (portnum){
		case 'A' :
		case 'a' :
			myPORTA = ~myPORTA;
		break;
		case 'B' :
		case 'b' :
			myPORTB = ~myPORTB;
		break;
		case 'C' :
		case 'c' :
			myPORTC = ~myPORTC;
		break;
		case 'D' :
		case 'd' :
			myPORTD = ~myPORTD;
		break;
		default: break;
	}	
}

//==========================================================================================================

u8 GPIO_read_PORT(u8 portnum){
	volatile u8 val=0;
	switch (portnum){
		case 'A' :
		case 'a' :
			val = myPINA;
		break;
		case 'B' :
		case 'b' :
			val = myPINB;
		break;
		case 'C' :
		case 'c' :
			val = myPINC;
		break;
		case 'D' :
		case 'd' :
			val = myPIND;
		break;
		default: break;
	}
	return val;	
}

//===========================================================================================================

//=================================Internal Pull Up==========================================================

void GPIO_vconnectpullup(u8 portnum, u8 pinnum, u8 connect_pullup){
	switch(portnum){
		case 'A' :
		case 'a' :
			if (Connect == connect_pullup)
			{
				SET_BIT(myPORTA,pinnum);
				CLR_BIT(mySFIOR,PUD);
			}else{
				CLR_BIT(myPORTA,pinnum);
			}
			break;
		case 'B' :
		case 'b' :
			if (Connect == connect_pullup)
			{
				SET_BIT(myPORTB,pinnum);
				CLR_BIT(mySFIOR,PUD);
				}else{
				CLR_BIT(myPORTB,pinnum);
			}
			break;
		case 'C' :
		case 'c' :
			if (Connect == connect_pullup)
			{
				SET_BIT(myPORTC,pinnum);
				CLR_BIT(mySFIOR,PUD);
				}else{
				CLR_BIT(myPORTC,pinnum);
			}
			break;
		case 'D' :
		case 'd' :
			if (Connect == connect_pullup)
			{
				SET_BIT(myPORTD,pinnum);
				CLR_BIT(mySFIOR,PUD);
				}else{
				CLR_BIT(myPORTD,pinnum);
			}
			break;
		default : break;
	}
}

//===========================================================================================================

