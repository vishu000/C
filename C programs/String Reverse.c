#include <stdio.h>
#include <string.h>


int main()
{
	char temp,s1[50];
	int a,b,i;
	printf("Enter s1 :");
	gets(s1);
	
	a= strlen(s1);
	b = a;
	a=a-1;
	for(s1[i=0];i<b/2;i++)
	{
		temp = s1[i];
		s1[i] = s1[a-i];
		s1[a-i] = temp;
	}
	printf("Reverse of s1 is : ");
	puts(s1);
	
	printf("Reverse of Reverse s1 is : %s",strrev(s1));
}