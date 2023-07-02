#include<stdio.h>
#include<conio.h>

int main()
{
	int n;
	printf("Enter any year: ");
	scanf("%d",&n);
	
	if(n%4==0)
	{
		printf("Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
}