#include<stdio.h>
int ascending(int a,int b)
{
	return a>b;
}
int descending(int a,int b)
{
	return a<b;
}
void sort(int arr[],int size,int (*compare)(int,int))
{
	int temp;
	for (int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-1-i;j++)
		{
			if(compare(arr[j],arr[j+1]))
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int ch;
	printf("enter choice (1-ascending,2-descending): \n");
	scanf("%d",&ch);
	if(ch==1)
	{
		sort(arr,n,ascending);
	}
	else if(ch==2)
	{
		sort(arr,n,descending);
	}
	else
	{
		printf("invalid user choice \n");
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
