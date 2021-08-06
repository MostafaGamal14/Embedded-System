#include <stdio.h>
#include <stdlib.h>
#include "string.h"

struct sinfo{
    char fname[50];
    char lname[50];
    unsigned int roll ;
    float GPA ;
    int cid[10];

}st[55];

static int count = 0 ;
static int i = 0 ;
static int r = 0;

void add_student_file(){
 char ch, file_name[25];
   FILE *fp;

   printf("Enter name of a file you wish to see\n");
   scanf("%s",file_name);

   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are:\n", file_name);

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
}

void add_student_manually(){

printf ("----------------------\n");
printf ("add student details\n");
printf ("----------------------\n");
printf("Enter the Roll Number : ");
scanf("%d",&st[i].roll);
printf("\nEnter the First Name of Student : ");
scanf("%s",st[i].fname);
printf("\nEnter the Last Name of Student : ");
scanf("%s",st[i].lname);
printf("\nEnter the GPA of Student : ");
scanf("%f",&st[i].GPA);
printf("\nEnter courses id Number of student : ");
for( r=0 ;r<10;r++){
scanf("%d",&st[i].cid[r]);
}
i+=1;
count+=1;
printf ("Student details is added successfully\n");
printf ("--------------------------------------\n");
printf ("[INFO]the total number of students is : %d\n",count);
printf ("[INFO]you can add %d more Students\n",55-count);
printf ("--------------------------------------\n");
}

void find_r1(){
  int roll_num ;
  printf("\nEnter the roll number : ");
  scanf("%d",&roll_num);
  for(int x =0;x<i;x++){
    if(roll_num==st[x].roll){
        printf("Student First Name : %s\n",st[x].fname);
        printf("Student Last Name : %s\n",st[x].lname);
        printf("Student Roll Number : %d\n",st[x].roll);
        printf("Student GPA Number : %f\n",st[x].GPA);
        printf("Courses ID of %s:\n",st[x].fname );
        for(int q=0;q<r;q++){
        printf( "Course[%d] : %d\n",q+1, st[x].cid[q]);
    }
  }
    else {
        printf("\n[Error] this roll number is not found \n");
    }
} }

void find_fn(){
   char temp[10];
   printf("\nEnter the first name : ");
    scanf("%s",temp);
  for(int x =0;x<i;x++){
    if(stricmp(temp,st[x].fname==0)){
        printf("Student First Name : %s\n",st[x].fname);
        printf("Student Last Name : %s\n",st[x].lname);
        printf("Student Roll Number : %d\n",st[x].roll);
        printf("Student GPA Number : %f\n",st[x].GPA);
        printf("Courses ID of %s:\n",st[x].fname );
        for(int q=0;q<r;q++){
        printf( "Course[%d] : %d\n",q+1, st[x].cid[q]);
    }
  }
    else {
        printf("\n[Error] this name is not found \n");
    }
}
}

void delete_student(){
      int roll_num ;
      printf("\nEnter the roll number : ");
      scanf("%d",&roll_num);
      for(int x =0;x<i;x++){
      if(roll_num==st[x].roll){
        for (int k = x; k < 54; k++)
                st[k] = st[k + 1];
                i--;
                printf("The Roll Number is removed Successfully\n");
            }
    else{
        printf("The Roll Number is not found\n");
    }
}

}
void total_students(){
printf ("--------------------------------------\n");
printf ("the total number of students is : %d\n",count);
printf ("you can add up to 55 Students\n");
printf ("you can add %d more Students\n",55-count);
printf ("--------------------------------------\n");
}
void find_c(){
       int temp ;
       printf("Enter the course id : ");
       scanf("%d",&temp);
       for(int j=0;j<=i;j++){
        for(int k=0;k<10;k++){
            if(temp==st[j].cid[k]){
                printf("Student First Name : %s\n",st[j].fname);
                printf("Student Last Name : %s\n",st[j].lname);
                printf("Student Roll Number : %d\n",st[j].roll);
                printf("Student GPA Number : %f\n",st[j].GPA);
                            }
        }
       }

}

void update_student(){
    int temp ;
    printf("\n Enter the roll number to update the entry : ");
    scanf("%d",&temp);
    for(int j=0;j<i;j++){
        if(st[j].roll==temp){
            int c ;
            printf("1. First name\n");
            printf("2. last name\n");
            printf("3. roll number\n");
            printf("4. GPA\n");
            printf("5. courses IDs\n");
            printf("\n\n choose the data you want to update \n");
            scanf("%d",&c);
            switch(c) {
            case 1 :
               scanf("%s",st[j].fname);
               break;
            case 2 :
               scanf("%s",st[j].lname);
               break;
            case 3 :
               scanf("%d",&st[j].roll);
               break;
            case 4 :
               scanf("%f",&st[j].GPA);
               break;
            case 5 :
               for( int k=0 ;k<10;k++){
              scanf("%d",&st[i].cid[k]);
                }
               break;
            }
            printf("Updated the data successfully \n");
        }
    }
}

void show_student(){
    for(int j=0 ;j<i;j++){
        printf("Student First Name : %s\n",st[j].fname);
        printf("Student Last Name : %s\n",st[j].lname);
        printf("Student Roll Number : %d\n",st[j].roll);
        printf("Student GPA Number : %f\n",st[j].GPA);
         printf("Courses ID of %s:\n",st[j].fname );
        for(int q=0;q<r;q++){
        printf( "Course[%d] : %d\n",q+1, st[j].cid[q]);
        }
        printf("---------------------------");
    }

}

int main()
{
    printf("\n\n----- Welcome to the Student Management System ------\n\n");
    while(1){
        int choice ;
        printf("\n\n---Choose The Task that you want to perform---\n");
        printf("1. Add the Student Details Manually\n");
        printf("2. Add the Student Details from text file\n");
        printf("3. Find the Student Details by Roll Number\n");
        printf("4. Find the Student Details by First Name\n");
        printf("5. Find the Student Details by Course Id\n");
        printf("6. Find the Total number of Students\n");
        printf("7. Delete the Students Details by Roll Number\n");
        printf("8. Update the Students Details by Roll Number\n");
        printf("9. Show all information\n");
        printf("10. To Exit\n");
        printf("\n  Enter your choice to find the task : ");
        scanf("%d",&choice);

        switch(choice){
          case 1 :
               add_student_manually();
                break ;
          case 2 :
               add_student_file();
                break ;
          case 3 :
                find_r1();
                break ;
          case 4 :
                find_fn();
                break ;
          case 5 :
                find_c();
                break ;
          case 6 :
                total_students();
                break ;
          case 7 :
                delete_student();
                break ;
          case 8 :
                update_student();
                break ;
          case 9 :
                show_student();
                break ;
          case 10 :
                exit(0);
                break ;
        }
    }

return 0 ;}
