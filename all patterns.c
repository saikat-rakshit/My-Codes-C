#include <stdio.h>
#include <math.h>
#define MAX 10
int i,j,k,n,r;
void pattern1();
void pattern2();
void pattern3();
void pattern4();
void pattern5();
void pattern6();
void pattern7();
void pattern8();
void pattern9();
void pattern10();
void main()
{
    printf("Pattern 1: \n");
    pattern1();
    printf("\nPattern 2: \n");
    pattern2();
    printf("\nPattern 3: \n");
    pattern3();
    printf("\nPattern 4: \n");
    pattern4();
    printf("\nPattern 5: \n");
    pattern5();
    printf("\nPattern 6: \n");
    pattern6();
    printf("\nPattern 7: \n");
    pattern7();
    printf("\nPattern 8: \n");
    pattern8();
    printf("\nPattern 9: \n");
    pattern9();
    int n;
    printf("\nEnter a number:");
    scanf("%d",&n);
    printf("\nPattern 10: \n");
    pattern10(n);
}
void pattern1()
{
    for(i=1;i<=4;i++)
	{
        for(j=1;j<=i;j++)
        printf("*");
        printf("\n");
    }
}
void pattern2()
{
    for(i=1;i<=4;i++)
	{
        for(j=1;j<=i;j++)
        printf("%d",j);
        printf("\n");
    }
}
void pattern3()
{
    for(i=1;i<=4;i++)
	{
        for(j=1;j<=i;j++)
        printf("%d",i);
        printf("\n");
    }
}
void pattern4()
{
    int c=1;
    for(i=1;i<=4;i++)
	{
        for(j=1;j<=i;j++)
        printf("%d ",c++);
        printf("\n");
    }
}
void pattern5()
{
    int c=1;
    for(i=1;i<=4;i++)
	{
        for(k=3;k>=i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",c++);
            printf("\n");
    }
}
void pattern6()
{
    for(i=1;i<=4;i++)
	{
        for(k=3;k>=i;k--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",i);
            printf("\n");
    }
}
void pattern7()
{
    for(i=1;i<=5;i++)
	{
        int c=(i%2==0)?0:1;
        for(j=1;j<=i;j++){
            printf("%d",c);
            c=(c==0)?1:0;
        }
        printf("\n");
    }
}
void pattern8()
{
    int c;
    for(i=1;i<=9;i++)
	{
        for(j=1;j<= abs(5-i);j++)
            printf("  ");
        c=(i<=5)?i:--c;
        for(k=1;k<=c;k++)
            printf("* ");
        for(k=c-1;k>=1;k--)
            printf("* ");
        printf("\n");
    }
}
void pattern9()
{
    int C[MAX][MAX];
    for(n=0;n<5;n++)
	{
        for(i=1;i<(5-n);i++)
            printf(" ");
        for(r=0;r<=n;r++){
            C[n][r]=(r==0 || r==n)?1:C[n-1][r-1]+C[n-1][r];
            printf("%2d",C[n][r]);
         }
        printf("\n") ;
    }
}
void pattern10(int n)
{
    int c;
    for(i=1;i<=2*n-1;i++)
	{
        for(j=1;j<=abs(n-i);j++)
            printf("  ");
        c=(i<=n)?i:--c;
        for(k=1;k<=c;k++)
            printf("%d ",k);
        for(k=c-1;k>=1;k--)
            printf("%d ",k);
        printf("\n");
    }
}
