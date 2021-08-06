/*
 ============================================================================
 Name        : Ass1_Num5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , num , sum=0 ;

	printf("Enter the number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);

    for(i=0;i<=num;i++){
    	sum+=i;
    }

    printf("sum= %d",sum);
	return 0;
}
