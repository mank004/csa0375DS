#include<stdio.h>
int main()
{
int a[100],n,s,i;	
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter Elements into array:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("Enter the element to insert:");
	scanf("%d",&s);
	printf("Array Elements Before insertion:\n");
	for(i=0;i<n;i++)
	    printf("%d\t",a[i]);
	for(i=n;i>=0;i--)
		a[i]=a[i-1];
	a[0]=s;
	printf("\nAfter Inserting:\n");  	
	for(i=0;i<=n;i++)
	    printf("%d\t",a[i]);
    return 0;
}	



