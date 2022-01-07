#include<stdio.h>
#include<conio.h>
int main()
{
    int row,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("%4d",c);
        }
        printf("\n");
    }
    getch();
    return 0;
}

