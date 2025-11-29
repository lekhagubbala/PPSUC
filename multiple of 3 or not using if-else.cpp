//multiple of 3 and should be an odd number using if-else
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%3==0&&n%2!=0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");	
	}
	return 0;
}
