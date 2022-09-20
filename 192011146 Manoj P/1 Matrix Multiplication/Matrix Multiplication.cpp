#include <stdio.h>
 
int main()
{
  int m, n, p, q, i, j, k, sum = 0,matrix1[10][10], matrix2[10][10], multiply[10][10];
  printf("Enter the number of rows and columns of matrix1\n");
  scanf("%d%d", &m, &n);
  printf("Enter the elements of  matrix1\n");
  for (  i = 0 ; i < m ; i++ )
  {
    for ( j = 0 ; j < n ; j++ )
    {
      scanf("%d", &matrix1[i][j]);
    }
  }
  printf("Enter the number of rows and columns of matrix2\n");
  scanf("%d%d", &p, &q);
  if ( n != p )
  {
    printf("Matrices with entered orders can't be multiplied with each other.\n");
  }
  else
  {
    printf("Enter the elements of second matrix\n");
    for ( i = 0 ; i < p ; i++ )
    {
      for ( j = 0 ; j < q ; j++ )
      {
        scanf("%d", &matrix2[i][j]);
      }
	}
    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < q ; j++ )
      {
        for ( k = 0 ; k < p ; k++ )
        {
          sum = sum + matrix1[i][k]*matrix2[k][j];
        }
 
        multiply[i][j] = sum;
        sum = 0;
      }
    }
    printf("Product of entered matrices:-\n");
    for ( i = 0 ; i < m ; i++ )
    {
      for ( j = 0 ; j < q ; j++ )
      {
        printf("%d\t", multiply[i][j]);
      }
      printf("\n");
    }
  }
 
  return 0;
}