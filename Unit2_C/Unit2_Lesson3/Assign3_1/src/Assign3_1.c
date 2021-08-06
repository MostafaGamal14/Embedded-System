/*
 ============================================================================
 Name        : Assign3_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2] , b[2][2] , s[2][2];
	int r , c ;

	printf("Enter the elements of 1st Matrix \n ");
	for (r=1;r<3;r++){
		for (c=1;c<3;c++){
			printf("Enter a[%d][%d]: ",r , c);
			fflush(stdout); fflush(stdin);
			scanf("%f",&a[r][c]);
		}
	}
	printf("Enter the elements of 2nd Matrix \n ");
		for (r=1;r<3;r++){
			for (c=1;c<3;c++){
				printf("Enter b[%d][%d]: ", r , c);
				fflush(stdout); fflush(stdin);
				scanf("%f",&b[r][c]);
			}
		}
	printf("sum of matrix : \n");
	for (r=1;r<3;r++){
				for (c=1;c<3;c++){
					s[r][c]=a[r][c]+b[r][c];
					}
	           }
	for (r=1;r<3;r++){
				for (c=1;c<3;c++){
					printf("s[%d][%d]= %.2f \n", r , c , s[r][c]);

				}
			}

	return 0;
}
