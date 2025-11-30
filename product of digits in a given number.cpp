//product of digits in a given number
#include<stdio.h>
int main()
{
	int n,r,product=1;
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		product=product*r;
		n=n/10;
	}
	printf("%d\n",product);
	return 0;
}
