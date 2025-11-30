//given  number is palindrome or not
#include<stdio.h>
int main()
{
	int m,n,rev=0,r;
	printf("Enter a number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==0)
	{
		printf("YES\n");
	}
	else
	printf("NO\n");
	return 0;
}
