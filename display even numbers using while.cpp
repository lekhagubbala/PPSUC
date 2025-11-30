//display all even numbers from o to n
#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter n avlue:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i=i+2;
	}
	return 0;
}
