#include<avr/io.h>
#include<util/delay.h>

int main(){


	DDRA=DDRA|0b11111111;
	
	while(1){
	
	
		for(int i=0;i<=7;i++)
			{
			
				PORTA=1<<i;
				_delay_ms(500);
			}
	
	
	}


}