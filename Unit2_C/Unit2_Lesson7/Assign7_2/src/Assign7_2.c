/*
 ============================================================================
 Name        : Assign7_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main()
{
 int a = 65 ;
 int *p=&a;
 for(int i=0;i<26;i++){
 printf("%c\t",*p+i);

}
}
