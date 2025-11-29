// eligible to vote or not using if-else 
#include<stdio.h>
int main()
{
	int age;
	printf("Enter age value:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Eligible to vote");
	}
	else
	{
		printf("Not eligible to vote");
	}
	return 0;
}
