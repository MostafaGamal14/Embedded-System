/*
 ============================================================================
 Name        : Assign5_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>

struct x {

  int real ;
  float imaj ;
};
struct x add (struct x a , struct x b){
  struct x c ;
  c.real=a.real+b.real ;
  c.imaj=a.imaj+b.imaj ;
  return c ;
}

int main()
{
   struct x A , B , C;
   printf("for 1st complex number \n");
   scanf("%d %f",&A.real,&A.imaj);

   printf("for 2nd complex number \n");
   scanf("%d %f",&B.real,&B.imaj);

   C = add(A,B);
   printf("Sum : %d+i%f",C.real,C.imaj);

return 0;
}


