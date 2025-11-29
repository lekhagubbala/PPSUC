//largets of two numbers using conditional operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	(a>b)?printf("%d is larger",a):printf("%d is larger",b);
	return 0;
}
