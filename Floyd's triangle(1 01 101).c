#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,n,p,q;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { p=1;q=0;}
     else
     { p=0;q=1;}
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    printf("%2d",p);
	 else
	    printf("%2d",q);
     printf("\n");
   }
   getch();
   return 0;
   
} 
