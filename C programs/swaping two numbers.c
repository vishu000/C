#include <stdio.h>
#include <conio.h>

int main()
{
	int num1, num2,temp;
	
	printf("a : ");
	scanf("%d",&num1);
	
	printf("b : ");
	scanf("%d",&num2);
	
	/*
	temp = num1;
	num1 = num2;
	num2 = temp;
	*/
	
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	printf("After swaping of two numbers we get \n");
	printf("a : %d\n",num1);
	printf("b : %d",num2);
}

