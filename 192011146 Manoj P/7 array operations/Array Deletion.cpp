#include<stdio.h>
int main()
{
    int n,array[5],i;
    printf("\n enter the number of array elements:");
    scanf("%d",&n);
    printf("\n enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    if(i==n-1)
        printf("\n array full");
    else
    {
        array[n-1]=0;
        n=n-1;
    }
    printf("\nArray elements after deletion: ");
    for(i=0;i<n;i++)
        printf("%d\t",array[i]);
    return 0;
}