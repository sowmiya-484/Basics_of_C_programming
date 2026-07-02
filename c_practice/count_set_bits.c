#include<stdio.h>
int countSetBits(unsigned int n)
{
	int count =0;
	while(n>0)
	{
		if(n%2==1)
		{
			count++;
		}
		n=n/2;
	}
	return count;
}
int main()
{
	int n,i;
	printf("enter no.of sensor values:\n");
	scanf("%d",&n);
	unsigned int arr[n];
	printf("enter sensor values:\n");
	for(i=0;i<n;i++)
	{
		scanf("%u",&arr[i]);
	}
	printf("values having exactly 4 set bits:\n");
	for(i=0;i<n;i++)
	{
		if (countSetBits(arr[i])==4)
		{
			printf("%u ",arr[i]);
		}
	}
	return 0;
}
