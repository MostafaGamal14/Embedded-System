/*
 ============================================================================
 Name        : Assign7_4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include<string.h>


int main()
{
    int n , i;
    printf("Enter numbers of elements : ");
    scanf("%d",&n);
    int arr[n];
    int *p= arr;
    printf("Enter array : \n");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
     printf("elements of array : \n");
    for(i=1;i<=n;i++){
        printf("element[%d] : %d\n",i,*p);
        p++;
    }
    p=&arr[n-1];
    printf("elements of reversed array : \n");
    for(i=n;i>0;i--){
        printf("element[%d] : %d\n",i,*p);
        p--;
    }

}
