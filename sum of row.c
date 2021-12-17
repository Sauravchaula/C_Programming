#include<stdio.h>
#include<conio.h>
 void main(){
 	int r, c, i, j, A[10][10],sum[10];
 	printf("\nEnter the size of a matrix: \n");
 	scanf("%d %d",&r, &c);
 	printf("\nEnter a element of a %dx%d matrix: \n",r,c);
 	for(i=0;i<r;i++){
 		for(j=0;j<c;j++){	
 	     scanf(" %d",&A[i][j]);
		 }
	 }
	 printf("\nThe elements of matrix is: \n");
	 for(i=0;i<r;i++){
 		for(j=0;j<c;j++){
 			printf("%d\t",A[i][j]);
 		}
 		printf("\n");
 	}
	 for(i=0;i<r;i++){
	 	sum[i]=0;
 		for(j=0;j<c;j++){
 			sum[i]+=A[i][j];
 		}
 		printf("The sum of row is: %d",sum[i]);
 		printf("\n");
 	}
 	getch();
 }
