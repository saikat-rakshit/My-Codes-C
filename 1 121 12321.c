#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,row;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            printf(" ");
        }
		for(j=1;j<=i;j++)
        {
            printf("%d",j);
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
