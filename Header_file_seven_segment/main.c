#include<avr/io.h>
#include<util/delay.h>
#include<7-segment.h>

int main(){

	DDRA=0b11111111;
	DDRB=0b11111111;
	
	while(1){
	
	 int value[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x6f};
	 int first_segment=0,second_segment=0;
			
		
		
		for(int i=0;i<45;i++){
			first_segment=i/10;
			second_segment=i%10;
			
			display(4,0x5b,30);
			display(3,0x3f,30);
			display(2,value[first_segment],30);
			display(1,value[second_segment],30);
			
			
		}
	
		
		
	}




}



