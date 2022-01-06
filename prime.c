//Check Prime or Not
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		k=k+1;
	}
	if(k==2)
	printf("%d is a Prime Number.",n);
	else
	printf("% is not a Primre Number.",n);
	getch();
	return 0;
}
