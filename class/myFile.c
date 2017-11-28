#include<avr/io.h>
#include<util/delay.h>

void top_to_down(){

	for(int i=0;i<=7;i++)
			{
			
				PORTB=1<<i;
				_delay_ms(500);
			}
	
	
}

void down_to_top(){

	for(int i=0;i<=7;i++)
			{
			
				PORTB=0b10000000>>i;
				_delay_ms(500);
			}


}