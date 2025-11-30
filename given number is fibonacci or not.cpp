//given number is fibonacci or not
#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,f3;
	printf("Enter n value:");
	scanf("%d",&n);
	while(n>=f1)
	{
		if(n==f1)
		{
			printf("YES");
			return 0;
		}
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("NO");
	return 0;
}
