//sum of n natural numbers using for loop
#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1,sum=0;i<n;sum+=i,i++)
	{
		printf("%d\t",sum);
	}
	return 0;
}
