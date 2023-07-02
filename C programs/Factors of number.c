#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int i,n;
	printf("Enter the number to know factors of it : ");
	scanf("%d",&n);
	
	printf("factors of %d are : ",n);
	for(i=1;i<=n;i++)
	{
		if(n % i == 0)
		printf("%d ",i);
	}
}