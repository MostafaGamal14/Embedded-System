/*
 ============================================================================
 Name        : Assign7_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

int main()
{
 int m = 29 ;
 printf(" address of m = %d\n",&m);
 printf(" value of m = %d\n\n",m);

 int *ab=&m ;
  printf(" Now ab is point to m ");
  printf(" address of pointer = %d\n",ab);
  printf(" content of pointer = %d\n",*ab);

 m = 34 ;
  printf(" address of pointer = %d\n",ab);
  printf(" content of pointer = %d\n\n",*ab);

 *ab = 7 ;
  printf(" address of m = %d\n",&m);
  printf(" value of m = %d\n",m);
}
