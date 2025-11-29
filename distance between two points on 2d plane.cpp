//distance between two points on 2d palne
#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float d;
	printf("Enter first point:");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point:");
	scanf("%d%d",&x2,&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("distance d=%.2f",d);
	return 0;
}
