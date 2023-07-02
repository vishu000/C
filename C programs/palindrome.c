#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
	int n,a,temp;
	printf("Enter the Number to know whether it is palindrome or not :");
	scanf("%d",&n);
	int t=n;
	while(t>0)
	{
		a = t%10;
		t = t/10;
		temp = temp*10 + a;
	}
	if(temp == n)
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not palindrome");
	}
}