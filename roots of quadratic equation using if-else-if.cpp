//roots of quadratic equation using if-else-if
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,r1,r2;
	printf("Enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
		printf("roots are equal");
		r1=r2=-b/(2*a);
		printf("Root 1=%.2f\n",r1);
		printf("Root 2=%.2f\n",r2);
	}
	else if(d>0)
	{
		printf("Roots are dsitinct\n");
		r1=(-b + sqrt(d)) / (2*a);
		r2=(-b - sqrt(d)) / (2*a);
		printf("Root 1=%.2f\n",r1);
		printf("Root 2=%.2f\n",r2);
	}
	else 
	printf("Roots are iamginary");
	return 0;
}

