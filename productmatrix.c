#include<stdio.h>
#include<conio.h>
#define M 3
#define N 2 
#define P 2
#define Q 3
void main()
{
int a[M][N], b[P][Q], R[M][Q], i, j, k;
printf("Enter elements of first matrix %dx%d\n", M, N);
for (i = 0; i < M; ++i)
{
for (j = 0; j < N; ++j)
{
scanf(" %d", *(a + i) + j);
}
}
printf("Enter elements of second matrix %dx%d\n",P,Q);
for (i = 0; i < P; ++i)
{
for (j = 0; j < Q; ++j)
{
scanf(" %d", *(b + i) + j);
}
}
for (i = 0; i < M; ++i)
{
for (j = 0; j < Q; ++j)
{
*(*(R + i) + j) = 0;
for (k = 0; k < P; ++k)
{
*(*(R+i)+j) += *(*(a+i)+k) *
*(*(b+k)+j);
}
}

}
printf("\nProduct is\n");
for (i = 0; i < M; ++i)
{
for (j = 0; j < Q; ++j)
{
printf("%d\t", *(*(R + i) + j));
}
printf("\n");
}
}

