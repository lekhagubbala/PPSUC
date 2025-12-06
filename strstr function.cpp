//strstr function
#include<stdio.h>
#include<string.h>
int main()
{
	char s[]="Computer";
	char*result=strstr(s,"put");
	if(result!=NULL)
	printf("Found");
	else 
	printf("Not Found");
	return 0;
}
