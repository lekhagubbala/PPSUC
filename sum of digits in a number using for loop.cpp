// sum of digits of a number
#include <stdio.h>
int main()
{
	int n,r,sum;
	printf("Enter a number:");
	scanf("%d",&n);
	for(n!=0;n=n/10;sum=0)
	{
		r=n%10;
		sum=sum+r;
	}
	printf("Sum=%d\n",sum);
	return 0;
}
