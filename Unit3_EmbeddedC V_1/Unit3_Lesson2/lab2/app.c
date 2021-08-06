#include "uart.h"

unsigned char string_buffer[100]="Mostafa Gamal";
void main(void){
	
	uart_send_string(string_buffer);
	
}