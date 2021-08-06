/*
 ============================================================================
 Name        : Assign3_6.c
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
    char ch ;
    int f=0 ,i;

    printf("Enter string : ");
    fflush(stdout);fflush(stdin);
    gets(st);

    printf("Enter character : ");
    fflush(stdout);fflush(stdin);
    scanf("%c",&ch);

    for(i=0;i<=strlen(st);i++){
        if(st[i]== ch){
            f+=1;
        }
    }
    printf("frequency of %c = %d", ch , f );
    return 0;
   }

