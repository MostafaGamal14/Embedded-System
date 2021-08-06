/*
 ============================================================================
 Name        : Ass1_Num3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a , b , c ;

	printf(" Enter three numbers : ");
	fflush(stdout);fflush(stdin);
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);

	if (a>b){
		if (a>c){
			printf("%f is the largest",a);
		}
	 }
	else if(b>c) {
		    printf("%f is the largest" ,b);
	}
	else {
		    printf("%f is the largest" ,c);
	}
	return 0;
}
