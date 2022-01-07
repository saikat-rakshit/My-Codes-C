/*MATRIX MULTIPLICATION*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,r1,c1,r2,c2,m1[10][10],m2[10][10],multi[10][10];
	printf("Enter numbers of rows and coloumns for 1st matrix you want:>");
	scanf("%d%d",&r1,&c1);
	printf("Enter numbers of rows and coloumns for 2nd matrix you want:>");
	scanf("%d%d",&r2,&c2);
	printf("Enter elements for 1st matrix:>\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
    printf("Enter elements for 2nd matrix:>\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	}
	printf("The 1st matrix is:>\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%3d",m1[i][j]);
		}
		printf("\n");
	}
		printf("The 2nd matrix is:>\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%3d",m2[i][j]);
		}
		printf("\n");
	}
	if(c1==r2)
	{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			multi[i][j]=0;
			for(k=0;k<c1;k++)
			{
				multi[i][j]=multi[i][j]+m1[i][k]*m2[k][j];
			}
		}
	}
    }
    printf("The result is:>\n");
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    		printf("%5d",multi[i][j]);
		}
	printf("\n");
	}
	getch();
	return 0;
}
