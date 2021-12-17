#include<stdio.h>
#include<string.h>
int main(){
	int i, j, n,k;
	char s[]={"SAURAV"};
	n=strlen(s);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%c",s[j-1]);
		}
		printf("\n");
	}
}
