//To check leapyear or not
#include<stdio.h>
#include<conio.h>
int main()
{
	int y;
	printf("Enter a year to check leapyear or not: ");
	scanf("%d",&y);
	if(y%4==0)
	{
		printf("%d is a leapyear.",y);
	}
	else
	{
		printf("%d is not a leapyear.",y);
	}
	getch();
	return 0;
}
