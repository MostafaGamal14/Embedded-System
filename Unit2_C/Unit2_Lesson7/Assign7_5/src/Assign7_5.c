/*
 ============================================================================
 Name        : Assign7_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
#include<string.h>

struct Semployee {
char name[20];
int id ;
};

int main()
{
struct Semployee employees []={{"Sam",1021},{"Alex",1022},{"Tom",1023}};
struct Semployee *p ;
p = employees ;

printf("employee name : %s\n",(p+1)->name);
printf("employee id : %d",(p+1)->id);


}
