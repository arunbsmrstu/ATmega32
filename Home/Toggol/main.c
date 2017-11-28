#include<avr/io.h>
#include<util/delay.h>

int main(){

	char button_previous_status=0;

	DDRB|=0b11111111;//INPUT
	DDRA&=0b11111110;
	
	while(1){
	
	
		char button_status=PINA & 0b00000001;
		
		if(button_status && (button_status!=button_previous_status)){
		
				PORTB^=0b11111111;
				//_delay_ms(500);
		}
	
		button_previous_status=button_status;
	
	}



}