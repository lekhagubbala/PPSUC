//nth multiplication table
#include<stdio.h>
int main()
{
	int n,i=1;
	printf("Enter a number:");
	scanf("%d",&n);
	a1:
		printf("%dx%d=%d\n",n,i,n*i);
		i++;
		if(i<=10)
		goto a1;
		return 0;
}
