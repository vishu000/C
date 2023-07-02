#include <stdio.h>
#include <stdlib.h>
#define n 100
#define m 100

int main()
{
	int a1[n][m],a2[n][m],a3[n][m],i,j,r,c;
	
	printf("how many rows do you want for both the matrices : ");
	scanf("%d",&r);
	
	printf("how many coloums do you want for both the matrices : ");
	scanf("%d",&c);
	/////////////////////////////////////////
	printf("Enter first %d x %d matrix : \n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a1[i][j]);
		}
	}
	printf("First matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a1[i][j]);
		}
		printf("\n");
	}
	//////////////////////////////////////
	printf("\n");
	printf("\n");
	/////////////////////////////////////
	printf("Enter second %d x %d matrix : \n",r,c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a2[i][j]);
		}
	}
	printf("second matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	/////////////////////////////////////
	printf("Sum of two matrices is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			a3[i][j] = a1[i][j] + a2[i][j];
			printf("%d\t",a3[i][j]);
		}
		printf("\n");
	}
}