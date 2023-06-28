#include "ExtInt.h"


ISR(INT0_vect){
	
	 sayac++;
	 for (int i=0; i<sayac; ++i)
	 {
		 PORTD|=(1<<PIND7);	
		 _delay_ms(1000);
		 PORTD&=~(1<<PIND7);	
		 _delay_ms(1000);
	 }
	 
	 
}


ISR(INT1_vect){
	sayac--;
	 for (int i=0;i<sayac;++i)
	 {
		  PORTD|=(1<<PIND7);
		  _delay_ms(1000);
		  PORTD&=~(1<<PIND7);
		  _delay_ms(1000);
	 }
	 
	
}


ExtInt::ExtInt(uint16_t ppr){
	sayac=0;
	pulsePerRev=ppr;
}

void  ExtInt::setExtInt0(){
	EICRA|=(1<<ISC00)|(1<<ISC01) ; //raising edge
	EIMSK|=(1<<INT0);
	SREG |=(1<<SREG_I); //sei yerine 
	DDRD|=(1<<PIND7);
	
	
}

void  ExtInt::setExtInt1(){
	EICRA|=(1<<ISC10)|(1<<ISC11); 
	EIMSK|=(1<<INT1);
	SREG |=(1<<SREG_I); //sei yerine 
	DDRD|=(1<<PIND6);
}

double ExtInt::getAngel(){
	return sayac/pulsePerRev*360;
	
}