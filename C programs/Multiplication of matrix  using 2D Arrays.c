#include <stdio.h>
#include <stdlib.h>
#define n 100
#define m 100

int main()
{
	int a1[n][m],a2[n][m],a3[n][m],i,j,k,r1,c1,r2,c2,sum;
	
	printf("how many rows do you want for first matrix : ");
	scanf("%d",&r1);
	
	printf("how many coloums do you want for first matrix : ");
	scanf("%d",&c1);
	
	printf("how many rows do you want for second matrix : ");
	scanf("%d",&r2);
	
	printf("how many coloums do you want for second matrix : ");
	scanf("%d",&c2);
	
	if(c1 == r2)
	{
		printf("Enter first %d x %d matrix : \n",r1,c1);
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a1[i][j]);
			}
		}
		printf("Enter second %d x %d matrix : \n",r2,c2); 
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&a2[i][j]);
			}
		}
		printf("First matrix : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d\t",a1[i][j]);
		}
		printf("\n");
		}
	
		printf("second matrix : \n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",a2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		
		printf("Multiplication of two matrices is : \n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				sum=0;
				for(k=0;k<c1;k++)
				{
					sum = sum + a1[i][k]*a2[k][j];
				}
				a3[i][j] = sum;
				printf("%d\t",a3[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("please Enter valid rows and coloums because for matrix multiplication the columns of first matrix should be equal to rows of second matrix ");
	}
}