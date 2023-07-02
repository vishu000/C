#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int i,n,a;
	printf("Enter the any number :");
	scanf("%d",&n);
	
	for(i=1;i>0;i++)
	{
		a = i*i;
		if(a==n)
		break;
	}
	printf("square root of %d is %d",n,i);
}