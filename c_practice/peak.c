#include<stdio.h>
int findPeaks(int arr[],int n,int peak[])
{
	int count=0;
	for(int i=1;i<n-1;i++)
	{
		if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
		{
			peak[count]=i;
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[20],peak[20];
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int total = findPeaks(arr,n,peak);
	for(int i=0;i<total;i++)
	{
		printf("\nPeak at index %d : %d",peak[i],arr[peak[i]]);
	}
	printf("\ntotal peaks:%d",total);
	return 0;
}

