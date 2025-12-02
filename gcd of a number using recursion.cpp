//GCD of a number
#include<stdio.h>
int gcd(int,int);
int main()
{
	int a,b,g;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	g=gcd(a,b);
	printf("gcd(%d,%d)=%d\n",a,b,g);
	return 0;
}
int gcd(int a , int b)
{
	if(b==0)
	return a;
	else
	return gcd(b,a%b);
}
