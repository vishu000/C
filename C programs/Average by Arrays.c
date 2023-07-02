#include <stdio.h>
#include <stdlib.h>
#define n 1000

int main()
{
	int sum =0,ave,a[n],s,i;
	printf("Enter the number of students : ");
	scanf("%d",&s);
	
	printf("Enter the marks of the student roll number wise :\n");
	for(i=0;i<s;i++)
	{
		printf("Roll number %d marks is : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		sum = sum + a[i];
		ave = sum/s;
	}
	printf("Sum of the marks of the students is %d\n",sum);
	printf("Average marks of the students is %d",ave);
}