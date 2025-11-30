//factorial of a given number
#include<stdio.h>
int main()
{
	int n,i=1,product=1;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		product*=i;
		i++;
	}
	printf("%d\t",product);
	return 0;
}
