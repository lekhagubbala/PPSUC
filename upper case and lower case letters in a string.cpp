//no.of upper case and lowercase letters
#include<stdio.h>
int main()
{
	char s[100];
	int i,upper=0,lower=0;
	puts("Enter s:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		lower++;
		else if(s[i]>='A'&&s[i]<='Z')
		upper++;
	}
	printf("No.of upper case letters:%d\n",upper++);
	printf("No.of lower case letters:%d\n",lower++);
	return 0;
}
