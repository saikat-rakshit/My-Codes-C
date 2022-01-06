//Enter Two Numbers & Swap Them
#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 printf("Enter two numbers for swaping:->");
 scanf("%d%d",&a,&b);
 c=a;
 a=b;
 b=c;
 printf("The numbers after swapping:->%d %d",a,b);
getch();
return 0;
}
