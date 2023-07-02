#include <stdio.h>
#include <string.h>


int main()
{
	char s1[50],s2[30];
	int a,i,flag =0;
	printf("Enter s1 :");
	gets(s1);
	printf("Enter s2 :");
	gets(s2);
	
	for(s1[i=0];s1[i]!='\0'|| s2[i]!='\0';i++)
	{
		if(s1[i] != s2[i])
		{
			flag =  1;
			break;		
		}
	}
	if(flag == 1)
	{
		printf("not same\n");
	}
	else
	{
		printf("same\n");
	}
	
	a = strcmp(s1,s2);
	
	if(a == 0)
	{
		printf("it is same");
	}
	else
	{
		printf("it is not same");
	}
}