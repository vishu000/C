#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
	int a[n],b[n],i,j,t,p;
	
	printf("How many elements do you want : ");
	scanf("%d",&t);
	
	printf("Enter %d elements : \n",t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Original Array : \n");
	for(i=0;i<t;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	/////////////////////////////////////
	
	printf("Enter the position to know the element : ");
	scanf("%d",&p);
	
	p=p-1;
	for(i=0;i<t;i++)
	{
		if(a[p] == a[i])
		{
			printf("%d",a[i]);
		}
	}
	printf("\n");
	
	printf("Reverse Array : \n");
	for(i=t-1,j=0; i>=0;i--,j++)
   	{
    	b[i]=a[j];
   	}
	for(i=0;i<t;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
}