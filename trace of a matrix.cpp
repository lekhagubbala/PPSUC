//trace of matrix
#include<stdio.h>
int main()
{
	int A[10][10],n,i,j,Tr=0;
	printf("Enter odd matrixA:");
	scanf("%d",&n);
	printf("Enter matrix A elements:\n");
	for(i=0;i<n;i++)
	   for(j=0;j<n;j++)
	   scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	   Tr=Tr+A[i][j];
	 printf("Trace of a given matrix is %d",Tr);
	return 0;
}
