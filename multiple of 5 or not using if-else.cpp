//multiple of 5 or not usng if-else
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%5==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
