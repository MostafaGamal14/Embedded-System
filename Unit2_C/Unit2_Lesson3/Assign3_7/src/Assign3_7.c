/*
 ============================================================================
 Name        : Assign3_7.c
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
    char st[50];
    int l=0 , i ;

    printf("Enter string : ");
    fflush(stdout);fflush(stdin);
    gets(st);

    for (i=0;st[i]!='\0';i++){
            l+=1;
        }
    printf("Length of string is %d " , l );

    return 0;
   }
