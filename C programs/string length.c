#include <stdio.h>
#include <string.h>


int main()
{
	char name[50];
	int c,i,count=0;
	printf("Enter you full name :");
	gets(name);
	c=strlen(name);
	printf("Length of the your name using function is %d\n",c);
	
	i=0;
	while(name[i] != '\0')
	{
		count++;
		i++;
	}
	printf("Length of you name without using function is %d",count);
	
}