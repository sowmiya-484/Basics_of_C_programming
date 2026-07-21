#include<stdio.h>
void count(int *arr,int n)
{
	int e=0,o=0;
	int i;
	for(i=0;i<n;i++)
	{
		if(*(arr+i)%2==0)
		{
			e++;
		}
		else
		{
			o++;
		}
	}
	printf("even=%d\n",e);
	printf("odd=%d\n",o);
}
int main()
{
	int n,i;
	int arr[100];
	printf("enter no of elements: \n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	count(arr,n);
	return 0;
}
