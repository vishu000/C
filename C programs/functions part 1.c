#include <stdio.h>

int add()
{
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	c=a+b;
	printf("addition of two numbers a + b is %d\n",c);
}
int sub()
{
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	c=a-b;
	printf("substration of two numbers a - b is %d\n",c);
}
int mul()
{
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	c=a*b;
	printf("multiplication of two numbers a * b is %d\n",c);
}
int div()
{
	int a,b,c;
	printf("Enter the number a : ");
	scanf("%d",&a);
	printf("Enter the number b : ");
	scanf("%d",&b);
	c=a/b;
	printf("division of two numbers a / b is %d\n",c);
}
int main()
{
	printf("Hi vishnu you can calucalate addition,substraction,multiplication and division\n");
	add();
	sub();
	mul();
	div();
	printf("vishnu all calucalations completed please check \n");	
}