//character is lower case or upper case or digit
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf(" %c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("Upper case");
	else if (ch>='a'&&ch<='z')
	printf("Lower case");
	else if(ch>=0&&ch<=9)
	printf("Digit");
	else
	printf("Neither a digit nor an alphabet");
	return 0;
}
