//sum of digits of a number
#include<stdio.h>
int main()
{
	int n,r,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("%d\n",sum);
	return 0;
}
