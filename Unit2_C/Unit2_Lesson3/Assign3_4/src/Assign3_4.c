/*
 ============================================================================
 Name        : Assign3_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n , i , num , location ;
    int arr[50];
    printf("Enter number of elements : ");
    fflush(stdout);fflush(stdin);
    scanf("%d",&n);

    for(i=1;i<=n;i++){
            arr[i]=i;
        printf("%d\n",arr[i]);
    }
    printf("Enter the number to be inserted ");
        fflush(stdout);fflush(stdin);
            scanf("%d",&num);
    printf("Enter the Location ");
        fflush(stdout);fflush(stdin);
            scanf("%d",&location);

            for (i=n+1;i>location;i--){
                arr[i]=arr[i-1];
                }
      arr[location]=num ;
      for(i=1;i<=n+1;i++){
        printf("%d",arr[i]);
      }
return 0;
	}

