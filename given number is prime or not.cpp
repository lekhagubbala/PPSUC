//given number is prime or not
#include<stdio.h>
int main()
{
	int n,i=2,counter=0;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			counter=1;
			break;
		}
		i++;
	}
	if(counter==0)
	printf("Prime number");
	else
	printf("Not a prime number");
	return 0;
}
