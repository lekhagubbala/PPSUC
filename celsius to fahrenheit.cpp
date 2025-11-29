//conversion of celsius to fahrenheit
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter the temperature in celsius:");
	scanf("%f",&c);
	f=9*c/5+32;
	printf("Temperature in fahrenheit:5.2f\n",f);
	return 0;
}
