//strcmpi function
#include<stdio.h>
#include<string.h>
int main()
{
	int res;
	char s1[]="ABCD";
	char s2[]="abcd";
	res=strcmpi(s1,s2);
	if(res==0)
	printf("Equal");
	else if(res<0)
	printf("Smaller");
	else
	printf("Larger");
	return 0;
}
