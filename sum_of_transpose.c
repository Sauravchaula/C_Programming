//Sum of Transposes of two matrices
#include<stdio.h>

void main(){
	int R, C, A[10][10], B[10][10], T1[10][10], T2[10][10], S[10][10], i, j;
	printf ("Enter the size of the matrices: ");
	scanf(" %d %d", &R, &C);
	
	printf("Enter elements of first matrix(%dx%d):\n",R,C);
	for (i=0; i<R; i++){
		for (j=0; j<C; j++){
			scanf(" %d", &A[i][j]);
		}
	}
	printf("Enter elements of second matrix(%dx%d):\n",R,C);
	for (i=0; i<R; i++){
		for (j=0; j<C; j++){
			scanf(" %d", &B[i][j]);
		}
	}
	
	for (i=0; i<R; i++){
		for (j=0; j<C; j++){
			T1[j][i]=A[i][j];
			T2[j][i]=B[i][j];
		}
	}
	for (i=0; i<C; i++){
		for (j=0; j<R; j++){
		S[i][j]=T1[i][j]+T2[i][j];
		}
	}
	printf("\n The Sum of transpose of two matrix is: \n");
		for (i=0; i<C; i++){
		for (j=0; j<R; j++){
		printf (" %d\t",S[i][j]);
		}
		printf ("\n");
	}
	getch();
}
