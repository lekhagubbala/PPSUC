//even sum and odd sum using do while
#include<stdio.h>
int main()
{
	int n,i=1,esum=0,osum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	do
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
	}while(i<=n);
	printf("Even sum=%d\n",esum);
	printf("Odd sum=%d\n",osum);
	return 0;
	
}
