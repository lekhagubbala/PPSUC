//given character is vowel or constant
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		switch(ch)
		{
			case 'a':printf("Given character is vowel\n");
			break;
			case 'A':printf("Given character is vowel\n");
			break;
			case 'e':printf("Given character is vowel\n");
			break;
			case 'E':printf("Given character is vowel\n");
			break;
			case 'i':printf("Given character is vowel\n");
			break;
			case 'I':printf("Given character is vowel\n");
			break;
			case 'o':printf("Given character is vowel\n");
			break;
			case 'O':printf("Given character is vowel\n");
			break;
			case 'u':printf("Given character is vowel\n");
			break;
			case 'U':printf("Given character is vowel\n");
			break;
			default:printf("Given character is consonant\n");
		}
	}
	else
	{
		printf("Not an alphabet\n");
		return 0;
	}
}
