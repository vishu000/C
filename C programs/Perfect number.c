#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n,sum =0;
	printf("Enter the number to know whether it is perfect number or not :");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
		if(n%i == 0)
		sum = sum + i;
	}
	if(sum==n)
	{
		printf("it is perfect number");
	}
	else
	{
		printf("it i is not perfect number");
	}
	
}