/*
 * Unit6_lesson4.c
 *
 * Created: 3/29/2021 7:03:47 PM
 * Author : MosTafaa
 */ 


 #define F_CPU 1000000UL
 #include <avr/io.h>
 #include <util/delay.h>
 #include <avr/interrupt.h>
 


 int main(void)
 {
 DDRA |=(1<<PA0);
 DDRB |=(1<<PB0)|(1<<PB1);
 DDRD &=~(1<<PD2)|(1<<PD3);          /* Make Pin INT0 as Input */
 PORTD|=(1<<PD2)|(1<<PD3);           /* Activate Internal Resistor */
 
 MCUCR |=(1<<0)  ;    /* Activate interrupt at fall edge & Rising edge for int0*/
 MCUCR &=~(1<<1);
 
 MCUCR |=(1<<3)  ;   /* Activate interrupt at fall edge for int1 */
 MCUCR |=(1<<2)  ;    
 
 
 GICR |=(1<<6);          /* Activate Pin INT0 */
 GICR |=(1<<7);          /* Activate Pin INT1 */

sei();
 
 while (1) ;
 }
 
 ISR(INT0_vect){
 PORTB^=(1<<PB0);
 _delay_ms(1000);
 }
 ISR(INT1_vect){
 PORTB^=(1<<PB1);
  _delay_ms(1000);

 }

