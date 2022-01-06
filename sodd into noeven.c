#include<stdio.h>//have problem
int n,even=0,odd=0,d;
int sodd()
{
	while(n>0)
	{
		d=d%10;
		if(d%2==0)
		{
		}
		else
		 odd=odd+d;
	}
}
int noeven()
{
	while(n>0)
	{
		d=d%10;
		if(d%2==0)
		{
			even++;
		}
		else
		 {
		 }
	}
	
}
int main()
{
	printf("Enter a number : ");
	scanf("%d",n);
	sodd();
	printf("Sum of odd * No of even = %d",sodd()*noeven());
	return 0;
}
