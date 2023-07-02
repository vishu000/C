#include <stdio.h>
#include <stdlib.h>
#define n 1000

int main()
{
	int a[n],s,i,e=0,t=0;
	printf("How many numbers do you want check : ");
	scanf("%d",&s);
	
	printf("Enter the numbers :\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		if(a[i]%2 == 0)
		{
			e++;
		}
		else
		{
			t++;
		}
	}
	printf("Total number of even numbers are : %d\n",e);
	printf("Total number of add numbers are : %d",t);
}