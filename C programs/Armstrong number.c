#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	
	int i,mul,count=0,temp,n,c=0,u,cnt;
	
	printf("Enter the number you want to know : ");
	scanf("%d",&n);
	
	for(i=1;n>0;i++)
	{
		n = n/10;
		count++;
	}
	cnt = count;
	temp = n;
	
	while(temp!=0)
	{
		u = temp%10;
		while(cnt!=0)
		{
			mul = mul*u;
			cnt--;
		}
		c = c +  mul;
		cnt = count;
		temp = temp/10;
		mul = 1; 		
	}
	
	if(c==n)
	{
		printf("it is armstrong number");
	}
	else
	{
		printf("it is not armstrong number");
	}
}