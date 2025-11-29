//simple and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,SI,CI;
	printf("Enter principle amount:");
	scanf("%f",&p);
	printf("Enter time period:");
	scanf("%f",&t);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	SI=p*t*r/100;
	CI=p*pow(1+r,t);
	printf("simple interest = %.2f\n",SI);
	printf("compound interest = %.2f\n",CI);
	return 0;
}
