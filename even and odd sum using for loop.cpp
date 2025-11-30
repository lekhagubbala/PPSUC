//even sum and odd sum
#include<stdio.h>
int main()
{
	int n,i,esum,osum;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;esum=0,osum=0;i<=n,i++)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
	}
	printf("Esum=%d\n",esum);
	printf("Osum=%d\n",osum);
	return 0;
}
