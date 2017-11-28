#include<avr/io.h>
#include<util/delay.h>

int main(){

	DDRA|=0b11111111;
	
	while(1){
	
	
		PORTA|=0b11111111;
		_delay_ms(500);
		PORTA&=0b00000000;
		_delay_ms(500);
		
		for(int i=0;i<=7;i++){
			PORTA=1<<i;
			_delay_ms(500);
		
		}
		
		PORTA&=0b00000000;
		_delay_ms(500);
		
		for(int i=0;i<=7;i++){
			PORTA=0b10000000>>i;
			_delay_ms(500);
		}
	
	}



}