#include<stdio.h>

int swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int bubble(int a[], int n)
{
  for(int i=0; i<n-1; i++)
  {
    for(int j=0; j<n-i-1; j++)
    {
        if (a[j+1] < a[j])
        {
            swap(&a[j], &a[j+1]);
        }
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

    bubble(a,n);
    printf("sorted array is : ");
    printArray(a,n);
}