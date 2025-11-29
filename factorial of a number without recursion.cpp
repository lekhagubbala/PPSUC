#include<stdio.h>
void fibonacci(int);
int main()
{
	int n;
	printf("Enter n value:");
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}
void fibonacci(int n)
{
	int i,f1=0,f2=1,f3;
	for(i=2;i<n;i++)
	{
	printf("%d",f3);
	f3=f1+f2;
	f1=f2;
	}
}
