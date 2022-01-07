#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	printf("Enter the number of rows : ");
    scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		printf("  ");
		for(j=1;j<=i;j++)
		{
			printf("%4d",j);
		}
		for(j=i-1;j>=1;j--)
        {
            printf("%d",j);
        }
		printf("\n");
	}
	getch();
	return 0;
}
