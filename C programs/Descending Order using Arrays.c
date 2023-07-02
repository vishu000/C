#include <stdio.h>
#include <stdlib.h>
#define n 100

int main()
{
	int a[n],i,j,t,temp;
	
	printf("How many elements do you want : ");
	scanf("%d",&t);
	
	printf("Enter %d elements : \n",t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Descending Order : ");
	for(i=0;i<t;i++)
	{
		for(j=i+1;j<t;j++)
		{
			if(a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	printf("%d\t",a[i]);
	}
}