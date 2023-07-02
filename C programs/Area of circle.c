#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	float t;
	printf("Enter the radius of circle : ");
	scanf("%d",&r);
	
	t = 3.14 *(r*r);
	printf("Area of the circle is %f",t);
}