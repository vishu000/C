#include <stdio.h>
#include <stdlib.h>
#define n 1000

int main()
{
	int a1[n],a2[n],a3[n],i ,s;
	
	printf("How many numbers do you want to add : ");
	scanf("%d",&s);
	
	printf("Enter Array 1 numbers :\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a1[i]);
	}
	
	printf("Enter Array 2 numbers :\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a2[i]);
	}
	
	printf("Array 3 numbers are :\n");
	for(i=0;i<s;i++)
	{
		a3[i] = a1[i] + a2[i];
		printf("a1[%d] : %d + a2[%d] : %d = a3[%d] : %d\n",i,a1[i],i,a2[i],i,a3[i]);
	}
	
}