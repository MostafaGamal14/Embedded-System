#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include "conio.h"

struct SData {
   char name [40];
   int id ;
   float height ;
};

struct SStudent {
    struct SData student ;
	struct SStudent *PNextStudent ;
};

struct SStudent *gpFirstStudent = NULL ;

void addstudent(){
     struct SStudent *PNewStudent ;
	 struct SStudent *PLastStudent ;
	 char temp[40];
	 //check list is empty
	   // if it is empty
          if(gpFirstStudent==NULL){
	        PNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		    gpFirstStudent = PNewStudent ;
	      }
        // if it isn’t empty
		   else {
             PLastStudent =gpFirstStudent ;
			 while (PLastStudent->PNextStudent)
			    PLastStudent = PLastStudent->PNextStudent ;
			  PNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
              PLastStudent->PNextStudent = PNewStudent ;
		   }
      //fill new record
     printf("\n Enter student id : ");
	 gets(temp);
	 PNewStudent->student.id=atoi(temp);

	 printf("\n Enter student name : ");
	 gets(PNewStudent->student.name);

	 printf("\n Enter student height : ");
	 gets(temp);
	 PNewStudent->student.height=atof(temp);

     // set the next pointer
     PNewStudent->PNextStudent=NULL;
}

void deleteStudent()
{
     char temp [40];
	 int selected_id ;

	 printf(" ENTER STUDENT ID :");
	 gets(temp);
	 selected_id=atoi(temp);

  if(gpFirstStudent) {
      struct SStudent* PSelectedStudent = gpFirstStudent ;
	  struct SStudent* PPreviosStudent = NULL;

	  while(PSelectedStudent)
	  {
	     if (PSelectedStudent->student.id==selected_id) {
		        if(PPreviosStudent){
					PPreviosStudent->PNextStudent = PSelectedStudent->PNextStudent ;
				}
				else {
				  gpFirstStudent=PSelectedStudent->PNextStudent ;
				}
		     free (PSelectedStudent);
			 return 1 ;
		 }
		 PPreviosStudent=PSelectedStudent ;
		 PSelectedStudent=PSelectedStudent->PNextStudent ;
	  }
	  printf("\n Cannot find ID \n");
	  return 0;

  }
}

void ViewStudent(){
	struct SStudent* CurrentStudent = gpFirstStudent ;
	int count = 0 ;
	if (gpFirstStudent=NULL){
		printf("\n List Is EMPTY \n");
	}
	else {
		 while(CurrentStudent){
			 printf("\n record number %d",count+1);
			 printf("\n \t ID: %d",CurrentStudent->student.id);
			 printf("\n \t name: %s",CurrentStudent->student.name);
			 printf("\n \t Height: %f",CurrentStudent->student.height);
			 CurrentStudent =CurrentStudent->PNextStudent;
			 count++;
		 }
	}
}

void DeleteALL(){
	struct SStudent* CurrentStudent = gpFirstStudent ;
	if (gpFirstStudent=NULL){
		printf("\n List Is EMPTY \n");
	}
	else {
		 while(CurrentStudent){
			struct SStudent* PTempStudent = CurrentStudent;
			 CurrentStudent =CurrentStudent->PNextStudent;
			 free(PTempStudent);

		 }
		 gpFirstStudent=NULL ;
	}

}


void main ()
{
	char temp[40];

	while(1)
	{
		printf("\n ------------------ \n");
		printf("\n choose one of this option :");
		printf("\n\t 1: Add Student ");
		printf("\n\t 2: DeleteStudent ");
		printf("\n\t 3: ViewStudent ");
		printf("\n\t 4: DeleteALL");
		printf("\n Enter Option Number : ");

		gets (temp);
		printf("\n--------------------\n");
		switch(atoi(temp))
		{
			case 1 :
			   addstudent();
			   break;
			case 2 :
			   deleteStudent();
			   break ;
			case 3 :
               ViewStudent();
			   break ;
			case 4 :
			    DeleteALL();
				break;
		     default :
			    printf("\n wrong option ");
				break ;
			 }



	}
}


