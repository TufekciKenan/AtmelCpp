
#ifndef EXTINT_H_
#define EXTINT_H_
#include <avr/io.h>
#include <avr/interrupt.h>
//#include<avr/common.h>



volatile static long sayac=-1;
class ExtInt{

private:
 uint16_t pulsePerRev;
public:
 
 ExtInt(uint16_t);
 void setExtInt0();
 void setExtInt1();
 double getAngel();
 long getSayac();

};




#endif /* EXTINT_H_ */