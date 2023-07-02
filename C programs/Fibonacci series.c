#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int n,i,a=0,b=1,u;
	printf("Enter the number to know first 5 numbers : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		u = a + b;
		a = b;
		b = u;
	}
}
