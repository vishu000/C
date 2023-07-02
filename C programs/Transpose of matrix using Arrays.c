#include <stdio.h>
#include <stdlib.h>
#define n 100
#define m 100

int main()
{
	int a[n][m],r,c,i,j,sum=0,csum=0,rsum=0;
	
	printf("how many rows do you want : ");
	scanf("%d",&r);
	
	printf("how many coloums do you want : ");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("matrix is :\n");
	printf("\n");
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Transpose is :\n");
	printf("\n");
	for(i=0;i<c;i++)
	{
		
		for(j=0;j<r;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}