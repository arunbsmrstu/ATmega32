#include<avr/io.h>
#include<util/delay.h>

void display(char *segment, unsigned char seg ,char *port, unsigned char data){
	
	*segment = 0b11111111;
	*port= data;
	*segment = ~(1<<(seg-1));
	_delay_ms(5);
}

int main(){

	DDRA=0b11111111;
	DDRB=0b11111111;
	
	while(1){
	
	 int value[10]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7c,0x07,0x7f,0x6f};
	 int first_segment=0,second_segment=0;
			
		
		
		for(int i=0;i<45;i++){
			first_segment=i/10;
			second_segment=i%10;
			
		
			
			//display(4,0x5b);
			//display(3,0x3f);
			//display(2,value[first_segment]);
			//display(1,value[second_segment]);
			
			display(&PORTB,4,&PORTA,0x5b);
			display(&PORTB,3,&PORTA,0x3f);
			display(&PORTB,2,&PORTA,value[first_segment]);
			display(&PORTB,1,&PORTA,value[second_segment]);


		
		}
	
		
		
	}




}



