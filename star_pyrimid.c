#include<stdio.h>
#include<conio.h>
void main(){
	int i, j, k, sp=9, c;
	for (i=1;i<=5;i++){
		for (j=i;j<=sp;j++){
				printf(" ");
		}
	     sp=sp-1;
		for(k=1;k<i*2;k++){
			printf("* ");
		}
		printf("\n");
	}
 return 0;
}
