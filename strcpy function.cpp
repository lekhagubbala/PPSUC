//second to first string
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="Hello";
	char s2[10]="World!!";
	puts(s1);
	strcpy(s1,s2);
	puts(s1);
	return 0;
}
