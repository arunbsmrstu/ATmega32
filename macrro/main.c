#include<avr/io.h>
#include<util/delay.h>
#define setBit(p,n)(p|=1<<n)
#define clearBit(p,n)(p&=~(1<<n))

void top_to_down(){

	for(int i=0;i<=7;i++)
			{
			
				PORTA=1<<i;
				_delay_ms(500);
			}
	
	
	}


}

void down_to_top(){

	for(int i=0;i<=7;i++)
			{
			
				PORTA=1>>i;
				_delay_ms(500);
			}
	
	
	}


}


int main(){

	setBit(DDRB,0);
	
	while(1){
			setBit(PORTB,0);
			_delay_ms(200);
			clearBit(PORTB,0);
			_delay_ms(200);
	
	}


}
