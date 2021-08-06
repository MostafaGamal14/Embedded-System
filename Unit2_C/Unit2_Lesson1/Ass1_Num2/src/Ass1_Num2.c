/*
 ============================================================================
 Name        : Ass1_Num2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x ;

	printf(" Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&x);

	if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
		printf("\n %c is vowel" ,x);
	 }
	else {
		printf("\n %c is consonant" ,x);
	}
	return 0;
}
