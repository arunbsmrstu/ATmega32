#include <avr/io.h>
#include <util/delay.h>

int main(){

	DDRA |=1<<PINA0;
	
	
	while(1){
	
		PORTA ^=1<<PINA0;
		_delay_ms(100);
	}

}