//wacp to check the given string is palindrome or not
#include<stdio.h>
int main()
{
	char s[10];
	int i,j,l;
	puts("Enter your name:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	l++;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			printf("Not a aplindrome\n");
			return 0;
		}
	}
	printf("Given string is palindrome\n");
	return 0;
}
