/*
 ============================================================================
 Name        : Assign7_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>


int main()
{
 char s[20];
 printf(" Input String : ");
 gets(s);
 char *p= s+ strlen(s);
 printf("\n Reverse of String : ");
 for (int i =0;i<strlen(s)+1;i++){
        printf("%c",*p--);
 }
printf("\n\n\n");

}
