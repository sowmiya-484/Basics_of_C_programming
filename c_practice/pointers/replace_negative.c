#include<stdio.h>
int main()
{
	int n,i,arr[100],*ptr;
	printf("enter n: \n");
	scanf("%d",&n);
	printf("array elemnts :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	for(i=0;i<n;i++)
	{
		if(*ptr<0)
		{
			*ptr=0;
		}
		ptr++;
	}
	printf("modified array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
