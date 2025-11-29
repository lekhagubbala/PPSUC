//Even or odd using conditional operators
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	(n%2==0)?printf("EVEN"):printf("ODD");
	return 0;
}
