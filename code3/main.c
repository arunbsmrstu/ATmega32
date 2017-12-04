#include<avr/io.h>
#include<util/delay.h>
#include<mylibrary.h>

void toptodown();
//void bottomtotop();

int main(){
	
	DDRA = 0b11111111;
	while(1){
	
	toptodown();
	bottomtotop();
	
	
	}
	
}

void toptodown(){
	PORTA = 0b000000001;
	for(char i=0;i<=7;i++){
	
		PORTA = 1<< i;
		_delay_ms(500);
	
	}

}

