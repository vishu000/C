#include <stdio.h>
#include <string.h>


int main()
{
	char sr[100],s1[50],s2[30];
	int i,j,a,b;
	printf("Enter s1 :");
	gets(s1);
	printf("Enter s2 :");
	gets(s2);
	a =strlen(s1);
	b =strlen(s2);
	strcat(s1,s2);
	printf("%s\n",s1);
	for(s2[i=0];i<=b;i++)
	{
			s1[a+i] = s2[i];
	}
	puts(s1);
}