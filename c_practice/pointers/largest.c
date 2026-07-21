#include<stdio.h>
int *largest(int *arr,int n)
{
	int i,*max=arr;
	for(i=1;i<n;i++)
	{
		if(*(arr+i)>*max)
		{
			max=arr+i;
		}
	}
	return max;
}
int main()
{
	int arr[100],n,i,*ptr;
	printf("enter n: ");
	scanf("%d",&n);
	printf("array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=largest(arr,n);
	printf("largest : %d \n",*ptr);
	printf("address of largest : %p",ptr);
	return 0;
}
