#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,number=1;
	printf("Enter the number of rows : ");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%4d",number);
			number++;
		}
		printf("\n");
	}
	getch();
	return 0;
}
