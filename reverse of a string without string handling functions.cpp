//reverse of a string without using string handling functions
#include<stdio.h>
int main()
{
	char s[10];
	int i,j,l,ch;
	puts("Enter your name:");
	gets(s);
	puts("Before reverse name is:");
	puts(s);
	for(i=0;s[i]!='\0';i++)
	l++;
	for(i=0,j=l-1;i<j;i++,j--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
	}
	puts("After reverse string is:");
	puts(s);
	return 0;
}
