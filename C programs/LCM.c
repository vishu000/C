#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int a,b,count=1,gcd,lcm;
	printf("Enter two number to know the lowest commen multiple\n");
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
	lcm = (a * b)/gcd;
	printf("%d",lcm);	
}