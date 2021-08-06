/*
 ============================================================================
 Name        : Ass1_Num7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i , num , sum=1 ;

	printf("Enter the number: ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);

    if (num>0){
    	for(i=1;i<=num;i++){
    	    	sum*=i;
    	    }
    	 }
    	else if(num<0) {
    		printf("ERROR!! Doesn’t Exist");
    	}
    	else {
    		printf("Factorial of 0 = 1 ");
    	}

    printf("Factorial= %d",sum);
	return 0;
}

