//largest element from an array using functions
#include<stdio.h>
void read(int[],int);
int large(int[],int);
int main()
{
	int a[10],n,largest;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	read(a,n);
	largest=large(a,n);
	printf("Largest number is %d\n",largest);
	return 0;
}
void read(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
}
int largest(int a[],int n)
{
	int i;
	int largest=a[0];
	for(i=1;i<n;i++)
	{
		if(largest<a[i])
		largest=a[i];
	}
	return largest;
}
