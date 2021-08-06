/*
 ============================================================================
 Name        : Ass1__Num8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c ;
	float a , b ;

	printf("Enter the operation : ");
	fflush(stdout);fflush(stdin);
	scanf("%c",&c);
	printf("Enter two operand : ");
	fflush(stdout);fflush(stdin);
	scanf("%f%f",&a,&b);

	switch (c){
	case '+' : printf("%f + %f = %f " ,a ,b, a+b);break;
	case '-' : printf("%f - %f = %f " ,a ,b, a-b);break;
	case '*' : printf("%f * %f = %f " ,a ,b, a*b);break;
	case '/' : printf("%f / %f = %f " ,a ,b, a/b);break;
	default  : printf("ERROR");break;
	}
	return 0;
}
