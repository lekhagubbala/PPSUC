//display array elements
#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter a number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array elements are : \n");
	for(i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
	return 0;
}
