//Factorial of a number
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,f=1;
	printf("Enter any number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("The factorial of the number: %d",f);
	getch();
	return 0;
}
