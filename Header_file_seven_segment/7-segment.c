#include<avr/io.h>
#include<util/delay.h>
void display(unsigned char seg , unsigned char data,int delay){
	
	PORTB = 0b11111111;
	PORTA= data;
	PORTB = ~(1<<(seg-1));
	_delay_ms(delay);
}