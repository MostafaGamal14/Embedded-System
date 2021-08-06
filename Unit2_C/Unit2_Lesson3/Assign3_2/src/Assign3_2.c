/*
 ============================================================================
 Name        : Assign3_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n , i;
	float sum = 0 ,  average ;

	printf("Enter the numbers of elements ");
	fflush(stdout);fflush(stdin);
	scanf("%d",&n);

	float arr[n];

	for(i=0;i<n;i++){
        printf("%d.Enter Number: ",i+1);
		fflush(stdout);fflush(stdin);
		scanf("%f",&arr[i]);
	}
	for(i=0;i<n;i++){

			sum+=arr[i];
		}
    average = sum / n ;
	printf("Average =%f",average);
	return 0;
}
