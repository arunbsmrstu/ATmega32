#include<avr/io.h>
#include<util/delay.h>
#define setBit(p,n)(p|=1<<n)
#define clearBit(p,n)(p&=~(1<<n))


int main(){

	DDRB=DDRB|0b11111111;
	
	while(1){
		top_to_down();
		_delay_ms(500);
		down_to_top();
		_delay_ms(500);
	
	
	}


}