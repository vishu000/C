#include<stdio.h>
#include<stdlib.h>

int swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int selection(int a[], int n)
{
  for(int i=0; i<n-1; i++)
  {
    int min = i;
    for(int j=i+1; j<n; j++)
    {
      if (a[j] < a[min])
      {
        min = j;
      }
    }
    if(min != i)
    {
      swap(&a[i], &a[min]);
    }
  }
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

  selection(a,n);
  printf("sorted array is : ");
  printArray(a,n);
}