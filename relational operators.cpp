//wacp using relational operators
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers a and b:");
	scanf("%d%d",&a,&b);
	printf("%d<%d=%d\n",a,b,a<b);
	printf("%d<=%d=%d\n",a,b,a<=b);
	printf("%d>%d=%d\n",a,b,a>b);
	printf("%d>=%d=%d\n",a,b,a>=b);
	printf("%d==%d=%d\n",a,b,a==b);
	printf("%d!=%d=%d\n",a,b,a!=b);
	return 0;
}
