#include <avr/io.h>
#include <avr/interrupt.h>
#include <util/delay.h>

/*Interrupt Service Routine for INT0*/
ISR(INT0_vect)
{
	PORTC=PORTC^0b00000001;		/* Toggle PORTC */
	_delay_ms(500);  	/* Software debouncing control delay */
	
}

void init_int0(){
		SREG|=(1<<7); /* Enable Global Interrupt */
	    MCUCR = 1<<ISC01 | 1<<ISC00;  /* Trigger INT0 on rising edge */
	    GICR = 1<<INT0;		/* Enable INT0*/
	

}

int main(void)
{
	DDRC=1<<0;		/* Make PORTC as output PORT*/
	DDRA=0b11111111;
	
	DDRD=~(1<<2);			/* PORTD as input */
	PORTD=~(1<<2);		/* Make pull up high */
	
	init_int0();
	
		
	
	while(1){
		
		for(int i=0;i<7;i++){
			PORTA=(1<<i);
			_delay_ms(100);
		}
		
		
	}
}