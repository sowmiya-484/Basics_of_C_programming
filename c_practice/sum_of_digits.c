#include<stdio.h>
int digitSum(int n)
{
	int sum=0;
	while(n>0)
	{
		sum=0;
		sum+=(n%10);
		n=n/10;
	}
	return sum;
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
		if(digitSum(arr[i])%2==0)
		{
			printf("%d\n",arr[i]);
		}
	}
	return 0;
}
