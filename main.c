#include "tm4c123gh6pm.h"
#include <stdio.h>


//-------------------------------------------
/* This function is called by the startup assembly code to perform system specific
initialization tasks. */

void SystemInit() {}
void delayMS(int a ); //function for delay
	
//--------------------------------------------
	

//portF DATAREG
#define PORTFDAT (*((volatile unsigned int*)0x400253fc))
//PORTF DENREG
#define PORTFDEN (*((volatile unsigned int*)0x40025400))
//PORTF DATA DIR
#define PORTFDIR (*((volatile unsigned int*)0x4002551C))
//PORTF CLK
#define RCGCGPIO (*((volatile unsigned int*)0x400FE608))

//----------------------------------------------
int main (void){
	
	RCGCGPIO |=0X20; //ENABLE CLK FOR PORTF
	PORTFDIR  =0X0E; //SETTING PINS 1..2..3 AS OUTPUT
	PORTFDEN  = 0X0E; //SETTING PINS 1..2..3 AS DIGITAL
	
	while(1)
	{
	if ( PORT ==1)
	
	}
	
	
	
	
	
	//--------------------------------------
void delayMS(int n)
{
 int i, j;
 for(i = 0 ; i < n; i++)
 for(j = 0; j < 3180; j++) 
	{}
}

//--------------------------------------------

