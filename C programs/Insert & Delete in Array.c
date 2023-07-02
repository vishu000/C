#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
	int a[n],i,t,d,p;
	
	printf("How many elements do you want : ");
	scanf("%d",&t);
	
	printf("Enter %d elements : \n",t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Which element do you want to insert : ");
	scanf("%d",&d);
	
	printf("At which position do you want to insert : ");
	scanf("%d",&p);
	
	p= p-1;
	for(i=t;i>=p;i--)
	{
		a[i+1] = a[i];
	}
	a[p] = d;
	for(i=0;i<t+1;i++)
	{
		printf("%d\t",a[i]);
	}
		printf("\n");
	
	printf("At which position do you want to delete the element : ");
	scanf("%d",&p);
	
	p= p-1;
	for(i=p;i<t;i++)
	{
		a[i] = a[i+1];
	}
	for(i=0;i<t;i++)
	{
		printf("%d\t",a[i]);
	}
}