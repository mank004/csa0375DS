#include <stdio.h>
int main()
{
  int array[10], x, i, n;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integer(s)\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  printf("Enter a number to search\n");
  scanf("%d", &x);
  for (i = 0; i < n; i++)
  {
    if (array[i] == x)
    {
      printf("%d is present at location %d.\n", x, i+1);
      break;
    }
 if(array[i]==n)
    {
    	printf("%d is not present in array",x);
    }
}
  return 0;
}