//length of a given string
#include<stdio.h>
int main()
{
	char name[10];
	int len=0,i;
	puts("Enter your name:");
	gets(name);
	for(i=0;name[i]='\0';i++)
	len++;
	printf("Length of your name is %d\n",len);
	return 0;
}
