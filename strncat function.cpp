//concatinate no.of characters
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="Hello";
	char s2[10]="World!!";
	puts(s1);
	strncat(s1,s2,3);
	puts(s1);
	return 0;
}
