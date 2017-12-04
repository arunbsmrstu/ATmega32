#include<avr/io.h>
#include<util/delay.h>

int main(){

	DDRA=DDRA|0b11111111;
	DDRB=DDRB|0b11111111;
	DDRC=DDRC|0b11111111;
	while(1){
	
	 int value[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x6f};
	 
		PORTC=0x3f;
		
		
		for(int i=0;i<10;i++){
			PORTB=value[i];
			
			for(int j=0;j<10;j=j+2){
				PORTA=value[j];
			    _delay_ms(200);
			}
		
		}
	
		
		
	}



}