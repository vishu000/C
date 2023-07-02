#include<stdio.h>
#include<conio.h>

int main()
{
	int i,n;
	printf("Up to which number do you want to know : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if((i % (5*3)) == 0)
		{
			printf("fizzbuzz\n");
		}
		else if((i % 3) == 0)
		{
			printf("fizz\n");
		}
		else if((i % 5) == 0)
		{
			printf("buzz\n");
		}
		else
		{
			printf("%d\n",i);
		}
	}
}