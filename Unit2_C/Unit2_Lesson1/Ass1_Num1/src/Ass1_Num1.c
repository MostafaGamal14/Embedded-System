/*
 ============================================================================
 Name        : Ass1_Num1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x ;

	printf(" Enter an integer you want to check: ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&x);

	if (x%2==0){
		printf("\n %d is even" ,x);
	 }
	else {
		printf("\n %d is odd" ,x);
	}
	return 0;
}
