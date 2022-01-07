#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,arr[100][100];
	printf("Enter how many rows you want:> ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
