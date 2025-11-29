//addition of two matrices using functions
#include<stdio.h>
void read(int[][10],int,int);
void display(int[][10],int,int);
void add(int[][10],int[][10],int[][10],int,int);
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2;
	printf("Enter the order of first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("Enter the order of second matrix:");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("Entre first matrix:");
		read(a,r1,c1);
		printf("Entr second matrix:");
		read(b,r2,c2);
		add(a,b,r1,c1);
		printf("Addition of first and second matrix is :\n");
		display(c,r1,c1);
	}
	else
	printf("Addition is not possible.");
	return 0;
}
void read(int a[][],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	scanf("%d",&a[i][j]);
}
void display(int a[][],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
void add(int a[][],int b[][],int C[][],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	c[i][j]=a[i][j]+b[i][j];
}
