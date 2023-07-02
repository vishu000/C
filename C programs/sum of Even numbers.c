#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,n,t,sum=0;
	printf("Up to which number do you want to add : ");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		t = i % 2;
		if(t == 0)
		{
			sum = sum + i;
		}
	}
	printf("sum of even numbers up to %d is %d",n,sum);
}