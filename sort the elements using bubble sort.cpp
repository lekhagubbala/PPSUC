//sort the elements using bubble sort
#include<stdio.h>
int main()
{
	int a[10],n,i,j,t;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Before sorting:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	printf("\n");
	//bubble sorting
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])//swapping
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	printf("After sorting:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
