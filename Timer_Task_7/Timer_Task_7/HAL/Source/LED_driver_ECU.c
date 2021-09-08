/*
 * LED_driver_ECU.c
 *
 * Created: 07/04/2020 04:18:10 م
 *  Author: Ahmed SemSem
 */ 
#include "../Header/LED_driver_ECU.h"

void LED_vinitialize(u8 port, u8 pin){
	GPIO_vsetPIN_DIR(port, pin, OUTPUT);
}

//=====================================================================

void LED_vTurnon(u8 port, u8 pin){
	GPIO_vwrite_PIN(port, pin, HIGH);
}

//=====================================================================

void LED_vTurnoff(u8 port, u8 pin){
	GPIO_vwrite_PIN(port, pin, LOW);
}

//=====================================================================

void LED_vToggle(u8 port, u8 pin){
	GPIO_vtoggle_PIN(port, pin);
}

//=====================================================================