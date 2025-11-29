//largest of three numbers using conditional operators
#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter a,b and c:");
	scanf("%d%d%d",&a,&b,&c);
	big=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("Largest is %d",big);
	return 0;
}
