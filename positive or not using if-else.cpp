//to check the given number is positive or not using if-else
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a value:");
	scanf("%d",&n);
	if(n>=0)
	{
		printf("given number is positive");
	}
	else
	{
		printf("given number is negative");
	}
	return 0;
}
