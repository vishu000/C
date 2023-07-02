#include <stdio.h>

void prime(int);
void main()
{
	int p;
	printf("Enter any number other than 0 and 1 : ");
	scanf("%d",&p);
	prime(p);
	
}

void prime(int p)
{
	if(p == 0)
	{
		printf("Please enter valid number");
	}
	else if(p == 1)
	{
		printf("Please enter valid number");
	}
	else if(p == 2)
	{
		printf("It is a prime number");
	}
	else if(p % 2 == 0)
	{
		printf("It is not prime number");
	}
	else
	{
		printf("It is prime number");
	}
}