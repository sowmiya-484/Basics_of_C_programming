#include<stdio.h>
int isperfect(int n)
{
	int i,sum=0;
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n,i;
        printf("enter the no of elements in array:\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
	for(i=0;i<n;i++)
	{
		if(isperfect(arr[i]))
		{
			printf("%d\t",arr[i]);
		}
	}
	return 0;
}
