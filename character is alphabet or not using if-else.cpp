//given character is alphabet or not
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
