#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,r,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	printf("_____________________________________\n");
	printf("Your original number is : %d\n",n);
	
	for(i=1;n>0;i++)
	{
		r = n % 10;
		sum = sum * 10 + r;
		n=n/10;
	}
	printf("Your reverese number is : %d",sum);
}