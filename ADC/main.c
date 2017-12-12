#include <avr/io.h>
#include<seven_segment.h>
#include <util/delay.h>


void main(){

			DDRC=0b11111111;
			
			while(1){
			
				for(int i=0;i<=100;i++){
				Seven_segment(&PORTC,i);
				}
			
		}
            
}
