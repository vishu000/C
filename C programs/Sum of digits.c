#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i,n,a,sum=0;
	printf("Enter the number which is greater than one digit :");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		a = n%10;
		n = n/10;
		sum = sum + a;
	}
	printf("sum of digits is %d",sum);
}