#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,i,j,k;
	
	printf(" How many rows do you want : ");
	scanf("%d",&n);
	
	// Triangle shape
	printf("Triangle\n");
	printf("\n");
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//Reverse triangle
	printf("Reverse Triangle\n");
	printf("\n");
	for(i=n;i>=1;i--)
	{
		for(k=n;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	//Diamond shape
	printf("Diamond shape using Triangle and Reverse Triangle \n");
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(2*i)-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{
		for(k=n-1;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=(2*i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("Diamond shape without using Triangle and Reverse Triangle \n");
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
    	for(j=1;j<=n-i;j++)
    	{
    		printf(" "); 
		}
    	for(j= 1;j<=(2*i)-1;j++)
      	{
      		printf("*");
		}
    	printf("\n");
	}
	for(i=1;i<=n-1;i++)
	{
    	for(j=1;j<=i;j++)
		{
			printf(" ");
		}
    	for(j=1;j<=2*(n-i)-1;j++)
		{
			printf("*");
		}
    	printf("\n");
	}
	printf("\n");
	printf("Half tringle all shapes \n");
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=n;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("__________________THANK YOU ____________________");
	
	printf("\n");
	printf("\n");	  
}