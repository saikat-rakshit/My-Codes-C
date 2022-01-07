#include<stdio.h>
#include<conio.h>
int m1(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
int m2(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
	}
}
int m3(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	printf("Enter how many rows you want: ");
	scanf("%d",&n);
	printf("Pattern 1 : \n");
	m1(n);
	printf("Pattern 2 : \n");
	m2(n);
	printf("Pattern 3 : \n");
	m3(n);
	getch();
	return 0;
}
