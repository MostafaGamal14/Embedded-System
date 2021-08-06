/*
 ============================================================================
 Name        : Assign5_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

#define PI 3.14
#define Area(r) PI*r*r

int main()
{
    int raduis ;
    float area ;

    printf("Enter Raduis \n");
    scanf("%d",&raduis);

    area =Area(raduis);
    printf("Area = %0.2f",area);
 return 0 ;
}

