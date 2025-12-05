//palindrome or not using do while
#include<stdio.h>
int main()
{
	int rev=0,r,n,m;
	printf("Enter a number:");
	scanf("%d",&n);
	m=n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}while(n!=0);
	if(rev==m)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	return 0;
}
