/*
 ============================================================================
 Name        : Assign4_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int num);
int main(void) {
 int a ;
 printf("Enter number: ");
 fflush(stdout);fflush(stdin);
 scanf("%d",&a);

 printf("factorial of %d is : %d",a,factorial(a));

 return 0;
   }
int factorial (int num){
   if (num!=1)

   return num * factorial(num-1);

}
