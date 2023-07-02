#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float i,b,p,sum=1;
	printf("Enter the Base : ");
	scanf("%f",&b);
	printf("Enter the power : ");
	scanf("%f",&p);
	
	if(p>0)
	{
		for(i=p;i>0;i--)
		{
			sum = sum*b;
		}
	}
	else if(p<0)
	{
		p=-p;
		for(i=p;i>0;i--)
		{
			sum = sum*b;
		}
		sum=1/sum;
	}
	else if(p==0)
	{
		sum= 1;
	}
	printf("%f",sum);
}