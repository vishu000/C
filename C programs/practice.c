#include <stdio.h>

int main() 
{
	int i,r,n;
	printf("how many letters do you want to enter :");
	scanf("%d",&n);
	
	char a[n];
    printf("Enter the string: ");
    gets(a);
    printf("Printing the characters:: \n");
    for (int i = 0; a[i] != '\0'; i++) 
	{
        if (a[i] != ' ') 
		{
            printf("%c\n", a[i]);
        }
    } 
	printf("\n");
	printf("which element do you want to remove :\n");
	scanf("%d",&r);
	
	if(r<=n)
	{
		printf("your string after removing the element :");
		for(i=0;i<n;i++)
		{
			if(i==r-1)
			{
				continue;
			}
			printf("%c\n",a[i]);                                    
		}
	}
	else
	{
		printf("you are out of position");
	}
}