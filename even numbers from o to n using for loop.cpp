//display all even numbers from 0 to n
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=0;i<=n;i=i+2)
	{
		printf("%d\t",i);
	}
	return 0;
}
