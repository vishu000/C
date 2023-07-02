#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()

{

// using if ?
	
	int a,b,res;
	char o;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	
	printf("which oparation do you want to perform on a and b +(add) or -(sub) or *(mul) or /(div) : ");
	o = getch();
	printf("%c\n",o);
/*
	if(o == '+')
	{
		res = a + b;
		printf("Result of a + b is %d",res);
	}
	
	if(o == '-')
	{
		res = a - b;
		printf("Result of a - b is %d",res);
	}
	
	if(o == '*')
	{
		res = a * b;
		printf("Result of a * b is %d",res);
	}
	
	if(o == '/')
	{
		res = a / b;
		printf("Result of a / b is %d",res);
	}
	else
	{
		printf("Enter Valid Operator!!");
	}
*/

	switch(o)
	{
		case '+':
			res=a+b;
  			printf("Sum: %d",res);
		break;
		case '-':
  			res=a-b;
  			printf("Difference: %d",res);
		break;
		case '*':
  			res=a*b;
  			printf("Product: %d",res);
		break;
		case '/':
  			res=a/b;
  			printf("Quotient: %d",res);
		break;
		default:
  			printf("Enter Valid Operator!!");
	}
}