#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a and b value:");
	scanf("%d%d",&a,&b);
	printf("%d+%d=%d\n",a,b,a+b);
	printf("%d-%d=%d\n",a,b,a-b);
	printf("%d*%d=%d\n",a,b,a*b);
	printf("%d/%d=%d\n",a,b,a/b);
	printf("%d%%%d=%d\n",a,b,a%b);
	return 0;
}
