#include<stdio.h>

int swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int printArray(int a[], int n)
{
  for (int i=0; i<n; i++)
  {
    printf("%d ", a[i]);
  }    
  printf("\n");
}

int main()
{
  int n;
  printf("Enter the length of the Array : ");
  scanf("%d", &n);
  int a[n];
  for(int i=0; i<n; i++)
  {
  scanf("%d", &a[i]);  
  }

  
}