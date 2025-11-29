//multiple of 6 and 9 or not using if-else
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%6==0&&n%9==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
