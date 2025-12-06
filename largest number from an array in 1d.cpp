//largest number from an array 
#include<stdio.h>
int main()
{
	int a[10],n,i,largest;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest = a[0];
	for(i=1;i<n;i++)
	{
		if (largest<a[i])
		{
			largest=a[i];
		}
	}
	printf("Largest number is %d\n",largest);
	return 0;
}
