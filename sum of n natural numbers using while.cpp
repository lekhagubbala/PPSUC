//sum of first n natural numbers
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("%d\t",sum);
	return 0;
}
