/*
 ============================================================================
 Name        : Assign5_4.c
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
    int i=0 ;
    printf("Enter information of student[%d] \n\n",i);
    printf("Enter roll number:");
    scanf("%d",&student.roll);
    printf("Enter name:");
    scanf("%s",student.name);
    printf("Enter marks:");
    scanf("%d",&student.marks);
    printf("********************\n");
    i++;
   return student ;
}

void print_student(struct Sstudent student){
    printf("%s %d %d\n",student.name,student.roll,student.marks);
}

int main()
{
  struct Sstudent student[10];
  int i = 0 ;
  do {
    student[i]=read_student();
    i++;
  }
  while (i!=10);

printf("Displaying informations of student \n");
for (i=0;i<10;i++){
    print_student(student[i]);
}
return 0 ;
}

