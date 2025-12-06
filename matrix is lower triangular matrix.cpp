//matrix is lower triangular matrix
#include<stdio.h>
int main()
{
	int m[10][10],n,i,j;
	printf("Enter order of matrix:");
	scanf("%d",&n);
	printf("Enter the matrix elements:\n");
    for(i=0;i<n;i++)
	{
	for(j=j+1;j<n;j++)
	{
	   if(m[i][j]!=0)
	   {
	   	 printf("Given matrix is not a lower triangular matrix\n");
	   	 return 0;
		   }	
		}	
  	}	
  	printf("Given matrix is lower triangular matrix\n");
  	return 0;
}
