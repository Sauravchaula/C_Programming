
#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j, k, space=1;
    for(i=0; i<5; i++){
       for(k=0; k<space; k++){
            printf(" ");
			}
        space = space+2;
        for(j=i; j<9-i; j++){
    printf("* ");
}
    printf("\n");
    }
    return 0;
}
