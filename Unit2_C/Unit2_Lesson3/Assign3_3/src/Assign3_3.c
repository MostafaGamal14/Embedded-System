/*
 ============================================================================
 Name        : Assign3_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
        int row , col ;

        printf("Enter rows and columns of matrix ");
        fflush(stdout); fflush(stdin);
	    scanf("%d %d", &row , &col);

	    int a[row][col] ,  t[col][row];
	    int r , c ;

	    printf("Enter the elements of Matrix \n ");
	    for (r=0;r<row;r++){
		for (c=0;c<col;c++){
			printf("Enter a[%d][%d]: ",r+1 , c+1);
			fflush(stdout); fflush(stdin);
			scanf("%d",&a[r][c]);
		}
	    }
		printf("The entered matrix \n ");
		for (r=0;r<row;r++){
				for (c=0;c<col;c++){
					printf("%d ",a[r][c]);
					if(c==col-1){
                        printf("\n\n");
					}
				}}
	for (r=0;r<row;r++){
				for (c=0;c<col;c++){
					t[c][r]=a[r][c];
					}
	           }
	printf("Transpose matrix \n ");
	for (r=0;r<col;r++){
				for (c=0;c<row;c++){
					printf("%d ", t[r][c]);
					if(c==row-1){
                        printf("\n\n");
					}
				}
			}
	return 0;
}
