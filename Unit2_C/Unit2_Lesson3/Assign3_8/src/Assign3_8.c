/*
 ============================================================================
 Name        : Assign3_8.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char st[50] , rev_st[50];
    int i , j;

    printf("Enter string : ");
    fflush(stdout);fflush(stdin);
    gets(st);
    j=strlen(st)-1;

    for (i=0;i<strlen(st);i++){
            rev_st[i]=st[j];
            j--;
        }
    printf("Reverse string is %s " , rev_st );

    return 0;
   }
