#include <stdio.h>
#include <stdlib.h>

int main()

{
	// using for loop ?
	
	int i,n,t;
	printf("enter the number : ");
	scanf("%d",&n);
	t=n;
	
	if(n>=0)
	{
		for(i=n-1;i>0;i--)
		{
			t= t*i;
		}
		printf("%d",t);
	}
	else
	{
		printf("You entered negative number please try again ");
    }
}