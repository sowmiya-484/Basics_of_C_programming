#include<stdio.h>
int main()
{
	int n,i;
	printf("enter array size:\n");
	scanf("%d",&n);
	int arr1[n],arr2[n];
	int *a,*b;
	a=arr1;
	b=arr2;
	printf("array 1 elements :\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("array 2 elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}
	for(i=0;i<n;i++)
	{
		if(*(a+i)!=*(b+n-i-1))
		{
			return 0;
		}
	}
	printf("\n Reverse Arrays\n");
	return 0;
}
