//day in a week based on a number using if-else-if
#include<stdio.h>
int main()
{
	int d;
	printf("Enter a single digit");
	scanf("%d",&d);
	if(d==1)
	printf("SUNDAY");
	else if(d==2)
	printf("MONDAY");
	else if(d==3)
	printf("TUESDAY");
	else if(d==4)
	printf("WEDNESDAY");
	else if(d==5)
	printf("THURSDAY");
	else if(d==6)
	printf("FRIDAY");
	else if(d==7)
	printf("SATURDAY");
	return 0;
}
