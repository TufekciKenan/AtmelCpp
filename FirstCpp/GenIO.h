#ifndef GENIO_H_
#define GENIO_H_
#include<stdint.h>
#include <avr/io.h>

class Led {
	private:
	int pinNumber;
	public:
	Led(uint8_t);
	void On();
	void Off();	
	
	
	};




#endif /* GENIO_H_ */