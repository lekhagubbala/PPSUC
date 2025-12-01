//factorial of a given number using do while
#include<stdio.h>
int main()
{
	int n,fact=1,i=1;
	printf("Enter a value:");
	scanf("%d",&n);
	do
	{
		fact=fact*i;
		i=i+1;
	}while(i<=n);
	printf("Fact=%d\n",fact);
	return 0;
}
