#include<stdio.h>
int main()
{
	int n,i;
	int arr1[100],arr2[100];
	int *p1,*p2;
	printf("enter number of elements : ");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	p1=arr1;
	p2=arr2;
	for(i=0;i<n;i++)
	{
		*p2=*p1;
		p1++;
		p2++;
	}
	printf("copied array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr2[i]);
	}
	return 0;
}
