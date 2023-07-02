#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int a,b,count=1,gcd;
	printf("Enter two number to know the highest commen factor\n");
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	
	while(count <= a && count <= b)
	{
		if(a % count == 0 && b % count == 0)
		{
			gcd = count;
		}
		count++;
	}
	printf("%d",gcd);	
}