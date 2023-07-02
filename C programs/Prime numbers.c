#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
/*

// The program is about checking the number you entered is prime number or not ?

	int i,n;
		
	printf("Enter the number : ");
	scanf("%d",&n);
	if(n <=1)
	{
		printf("it is not a prime number\n");
	}
	
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
		{
			printf("it is not prime number\n");
			break;
		}
	}
	if(n==i)
	{
		printf("it is prime number\n");
	}
*/

// The program is about to print the prime number next to the number you entered ?

	int n,i,j,t=0;
	printf("Enter the number you want to know : ");
	scanf("%d",&n);
	
	for(i=n;i>0;i++)
	{
		t=0;
		for(j=1;j<=i;j++){
			if(i%j == 0)
			{
				t++;
			}
		}
		if(t == 2)
		{
			printf("%d",i);
			break;
		}
	}

}