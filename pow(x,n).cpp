//c program to find x^n
#include<stdio.h>
#include<math.h>
int main()
{
	int b,e;
	printf("Enter base:");
	scanf("%d",&b);
	printf("Enter exponent:");
	scanf("%d",&e);
	printf("pow(%d,%d)=%f\n",b,e,pow(b,e));
	return 0;
}
