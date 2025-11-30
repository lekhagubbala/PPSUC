//factorial of a given number
#include<stdio.h>
int main()
{
	int i,n,fact;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;fact=1,i=i+1)
	{
		fact=fact*i;
	}
	printf("fact=%d\n",fact);
	return 0;
}
