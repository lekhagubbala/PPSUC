//wacp to implement linear search algorithm
#include<stdio.h>
int main()
{
	int a[10],n,i,counter=0,key;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	printf("Enter array values:");
	for(i=0;i<n;i++);
	{
	  scanf("%d",&a[i]);
    }
	printf("Enter an element to search:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			counter=1;
			break;
		}
	}
	if(counter==0)
	printf("%d is not found \n",key);
	else
	printf("%d is found at %d index\n",key,i);
	return 0;
}
