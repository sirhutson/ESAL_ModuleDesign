//**Quick Instructions**//

//This is the c file for Quiz3.
//Insert your code and documentation as described in the
//software design lecture.  
//Only insert code in between your group number and before
//the next group number for each section.  
//Do not delete any text.


//**Begin File**//

//descriptions************

//group1

//group2

//group3

//group4

//group5

//group6



//external variables *********

//group1

//group2

//group3

//group4

//group5

//group6


//includes************

#include "module.h"

//defines************
													//ring has 60 leds*
//group1

//group2

//group3

//group4

//group5

//group6

//structs************

//group1

//group2

//group3

//group4

//group5

//group6


//global variables ************


//group1

//group2

//group3

//group4

//group5

//group6

//private prototypes ************

//group1

//group2

//group3

//group4

//group5

//group6

//code ************

//group1

//group2

//group3
void send_one()  //user inputs the letter(port) and number(pin)
{
	int i;
	
	//with a clock speed of 16MHz it is 62.5ns to complete an instruction
	//each instruction is 1 clock cycle
	
	GPIOPinWrite( WSPort, WSPin, WSPin);
	for (i=0; i<1;i++) // this loop will leave the pin high for .6875 micro seconds  which is within the +/- 150 micro second range
	{
		__nop;
	}
	//using nop could just delay system for around the right time with the possible error
	GPIOPinWrite(WSPort, WSPin, 0);
		for (i=0; i<7;i++) //this will leave the pin low for 
	{
		__nop;
	}
	
	
}
//group4

//group5

//group6
