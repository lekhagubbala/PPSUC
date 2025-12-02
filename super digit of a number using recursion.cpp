//super digit of a number
#include<stdio.h>
int super(int);
int main()
{
	int n;
	printf("Enter a number:");
		scanf("%d",&n);
		printf("Super digit=%d\n",super(n));
		return 0;
}
int super(int n)
{
	if(n%9==0)
	return 9;
	else
	return n%9;
}
