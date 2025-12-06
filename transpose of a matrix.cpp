//transpose of a matrix
#include<stdio.h>
int main()
{
	int A[10][10],T[10][10],i,j,r,c;
	printf("Enter order of matrix:");
	scanf("%d%d",&r,&c);
	printf("Enter matrixA elements:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		  scanf("%d",&A[i][j]);
	}
	//transpose of a matrix
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		T[i][j]=A[i][j];
	}
	printf("After transpose matrix is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		printf("%d\t",T[i][j]);
		printf("\n");
	}
	return 0;
}
