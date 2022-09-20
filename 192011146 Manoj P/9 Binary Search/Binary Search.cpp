#include <stdio.h>
int binarySearch(int array[], int x, int low, int high) {
  if (high >= low) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] > x)
      return binarySearch(array, x, low, mid - 1);

    return binarySearch(array, x, mid + 1, high);
  }

  return -1;
}

int main() 
{
  int array[100],n1,i,x;
  printf("Enter the no.of.elements:");
  scanf("%d",&n1);
  printf("Enter the elements\n");
  for (i=0;i<n1;i++)
  {
  	scanf("%d",&array[i]);
  }
  printf("Entered elements\n");
  for (i=0;i<n1;i++)
  {
  	printf("%d\n",array[i]);
  }
  printf("Enter the element to be searched:");
  scanf("%d",&x);
  int result = binarySearch(array, x, 0, n1- 1);
  if (result == -1)
    printf("Not found");
  else
    printf("Element is found at index %d", result);
  return 0;
}    