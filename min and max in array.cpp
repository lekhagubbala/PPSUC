//min and max in array
#include<stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("min=%d,max=%d",min,max);
	return 0;
}
