#include<stdio.h>
int main()
{
	int arr[100],n,i,count=0;
	int *ptr;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	for(i=0;i<n;i++)
	{
		if(*ptr>50)
		{
			count++;
		}
		ptr++;
	}
	printf("count : %d \n",count);
	return 0;
}
