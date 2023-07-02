#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	//find the number of digits in the number ?
	
	int i,n,count=0;
	printf("Enter the number you want to know : ");
	scanf("%d",&n);
	printf("----------------------------------------------\n");
	for(i=1;n>0;i++)
	{
		n = n/10;
		count++;
	}
	printf("The number of digits in your number is : %d",count);
}