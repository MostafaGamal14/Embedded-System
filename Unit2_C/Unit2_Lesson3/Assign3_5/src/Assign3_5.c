/*
 ============================================================================
 Name        : Assign3_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arr[50];
    int n , i , location , num ;

    printf("Enter no of elements ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&n);

    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("Enter element to be searched ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);

    for(i=0;i<n;i++){
        if(num==arr[i]){
            printf("Location of num : %d\n",i+1);
            printf("Index of num : %d",i);
        }
    }
    return 0;
   }
