#include <stdio.h>
#include <stdlib.h>
#define n 100
#define m 100

int main()
{
	int a[n][m],r,c,i,j,sum=0,csum=0,rsum=0,dsum =0;
	
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
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("\n");
	printf("Sum of all elements in Array is %d\n",sum);
	
	for(i=0;i<r;i++)
	{
		
		for(j=0;j<c;j++)
		{
			csum = csum + a[i][j];
		}
		printf("sum of elements in row %d is %d \n",i,csum);
		csum = 0;
	}
	
	for(j=0;j<c;j++)
	{
		
		for(i=0;i<r;i++)
		{
			rsum = rsum + a[i][j];
		}
		printf("sum of elements in coloum %d is %d \n",j,rsum);
		rsum = 0;
	}
	
	if(r == c)
	{
		for(i=0;i<r;i++)
		{
			dsum = dsum + a[i][i];
		}
		printf("sum of diagonal elements %d is %d \n",i,dsum);  
	}
}