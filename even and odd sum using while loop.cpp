//even sum and odd sum
#include<stdio.h>
int main()
{
	int n,i=1,esum=0,osum=0;
	printf("Enter n value:");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			esum=esum+i;
		}
		else
		{
			osum=osum+i;
		}
		i++;
	}
	printf("Even sum=%d\n",esum);
	printf("Odd sum=%d\n",osum);
	return 0;
}
