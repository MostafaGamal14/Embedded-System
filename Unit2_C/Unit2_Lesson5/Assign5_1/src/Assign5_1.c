/*
 ============================================================================
 Name        : Assign5_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

struct Sstudent {
  char name[50];
  int roll;
  int marks ;
};
struct Sstudent read_student(){
    struct Sstudent student ;

    printf("Enter information of student \n\n");
    printf("Enter roll number:");
    scanf("%d",&student.roll);
    printf("Enter name:");
    scanf("%s",student.name);
    printf("Enter marks:");
    scanf("%d",&student.marks);
    printf("********************\n");
   return student ;
}
void print_student(struct Sstudent student){
    printf("name: %s \nroll: %d \nmarks: %d\n",student.name,student.roll,student.marks);
}

int main(void) {
	struct Sstudent student;
	  student =read_student();
	  print_student(student);

	return 0;
}
