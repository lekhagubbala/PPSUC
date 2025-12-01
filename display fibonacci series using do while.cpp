//display fibonacci series using do while
#include<stdio.h>
int main()
{
	int n,i=0,f1=0,f2=1,f3;
	printf("Enter a number:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
		i++;
	}while(i<n);
	return 0;
}
