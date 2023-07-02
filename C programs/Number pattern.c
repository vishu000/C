#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k,y=1,a=1;
	
	printf(" How many rows do you want : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",y);
			y++;
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=5;i+=2)
	{
    	for(j=5;j>=1;j--)
    	{
    	if(j>i)
        	printf(" ");
    	else
        	printf("%d ",a++);
    	}
    	printf("\n");
  	}
	printf("\n");	  
}