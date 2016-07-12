#include <stdio.h>
#include <stdlib.h>

void printRepeating(int a[], int size)
{
  int i;
for (i = 0; i < size; i++)
  {
    if (a[abs(a[i])] >= 0)
      a[abs(a[i])] = -a[abs(a[i])];
    else
      printf(" %d ", abs(a[i]));
  }
}

int main()
{
    int n;
    scanf("%d",&n);
  int a[n],i;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }

  printRepeating(a, n);
    return 0;
}
