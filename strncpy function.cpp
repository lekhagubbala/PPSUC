//strncpy function
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="Hello";
	char s2[10]="World!!";
	puts(s1);
	strncpy(s1,s2,3);
	puts(s1);
	return 0;
}
