#include<stdio.h>
int main()
{
	int i,n,count=0;
	printf("enter n:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(!(a[i]>=0&&a[i]<=100))
		{
			a[i]=-1;
			count++;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\ncount:%d\n",count);
	return 0;
}


