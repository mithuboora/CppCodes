#include <stdio.h>

int main()
{
  int arr[1000], num, i, d, swap;

  printf("enter the number of elements\n");
  scanf("%d", &num);

  printf("enter %d elements\n", num);

  for (i = 0; i < num; i++)
    scanf("%d", &arr[i]);

  for (i = 0 ; i < num - 1; i++)
  {
    for (d = 0 ; d < num - i - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }

  printf("Sorted numbers in increasing order:\n");

  for (i = 0; i < num; i++)
     printf("%d\n", arr[i]);

  return 0;
}