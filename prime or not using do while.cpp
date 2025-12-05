//prime or not using do while
#include<stdio.h>
int main()
{
	int n,i=2,counter=0;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
		{
			counter=1;
			break;
		}
		i++;
	}while(i<n);
	if(counter==0)
	printf("PRIME\n");
	else
	printf("NOT A PRIME\n");
	return 0;
}
