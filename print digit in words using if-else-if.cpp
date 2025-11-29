// to print digit in words using if-else-if
#include<stdio.h>
int main()
{
	int d;
	printf("Enter a single digit:");
	scanf("%d",&d);
	if(d==0)
	printf("ZERO");
	else if (d==1)
	printf("ONE");
	else if(d==2)
	printf("TWO");
	else if (d==3)
	printf("THREE");
	else if(d==4)
	printf("FOUR");
	else if(d==5)
	printf("FIVE");
	else if(d==6)
	printf("SIX");
	else if(d==7)
	printf("SEVEN");
	else if(d==8)
	printf("EIGHT");
	else if(d==9)
	printf("NINE");
	else
	printf("INVALID DIGIT");
	return 0;
	
}
