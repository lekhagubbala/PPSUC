//insert an element into the array
#include<stdio.h>
int main()
{
	int n,i,a[10],p;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before insertion array elements are:\n");
	for(i=0;i<n;i++)
	printf("a[%d]=%d\n",i,a[i]);
	printf("\n");
	printf("Enter a position to insert:");
	scanf("%d",&p);
	for(i=n-1;i>=p-1;i--)
	{
		a[i+1]=a[i];
	}
	printf("Enter an element to insert at %d position : ",p);
	scanf("%d",&a[p-1]);
	n++;
	printf("After insertion array elements are:");
	for(i=0;i<n;i++)
	printf("a[%d]=%d\n",i,a[i]);
	return 0;
}
