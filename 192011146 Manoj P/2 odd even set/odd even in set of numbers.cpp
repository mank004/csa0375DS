#include <stdio.h>
int main()
{
	int a[100],i,n;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	printf("Enter the Elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Even numbers!!\n");
	for(i=0;i<n;i++)
	{
		if (a[i]%2==0)
		{
			printf("%d\t",a[i]);
		}
		
	}
	printf("\nOdd  numbers!!\n");
	for(i=0;i<n;i++)
	{
		if (a[i]%2!=0)
		{
			printf("%d\t",a[i]);
		}
		
	}
	return 0;
	