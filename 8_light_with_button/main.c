#include<avr/io.h>
#include<util/delay.h>

int main(){

	DDRB=DDRB | 0b11111111;
	DDRA=DDRA & 0b11111110;
	char p_button=0;
	
	
	while(1){
	
		char button=PINA & 0b00000001;	
		if(button && (button !=p_button)){
	        PORTB=PORTB^0b11111111;
	        //_delay_ms(500);
	}
		
		p_button=button;
	
	
	}
	


}