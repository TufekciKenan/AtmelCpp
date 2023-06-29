#include "ExtInt.h"


ISR(INT0_vect){
	 sayac++; 
	 
}


ISR(INT1_vect){
	sayac--;
	
}


ExtInt::ExtInt(uint16_t ppr){
	pulsePerRev=ppr;
}

void  ExtInt::setExtInt0(){
	EICRA|=(1<<ISC00)|(1<<ISC01) ; //raising edge
	EIMSK|=(1<<INT0);
	sei();
	//SREG |=(1<<SREG_I); //sei yerine 
		
}

void  ExtInt::setExtInt1(){
	EICRA|=(1<<ISC10)|(1<<ISC11); 
	EIMSK|=(1<<INT1);
	sei();
	//SREG |=(1<<SREG_I); //sei yerine 
	
}

double ExtInt::getAngel(){
	return sayac/pulsePerRev*360;
	
}

long ExtInt::getSayac(){
	return sayac;
	
}