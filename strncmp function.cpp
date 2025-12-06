//strncmp function
#include<stdio.h>
#include<string.h>
int main()
{
	int res;
	char s1[]="ABCD";
	char s2[]="ABCE";
	res=strncmp(s1,s2,3);
	if(res==0)
	printf("Two strings are equal");
	else if(res<0)
	printf("%s is smaller than %s",s1,s2);
	else
	printf("%s is larger than %s",s1,s2);
	return 0;
}
