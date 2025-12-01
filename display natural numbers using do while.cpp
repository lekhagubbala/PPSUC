//display natural numbers using do while
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",i);
		i++;
	}
	while(i<=n);
	return 0;
}
