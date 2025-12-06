//generate fibonacci series without recursion
#include<stdio.h>
void fib(int);
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	fib(n);
	return 0;
}
void fib(int n)
{
	int i=1,f1=0,f2=1,f3;
	for(i=0;i<n;i++)
	{
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}

