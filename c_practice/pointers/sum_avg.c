#include<stdio.h>
int main()
{
	int arr[100],n,i,sum=0,*ptr;
	float avg;
	printf("n: ");
	scanf("%d",&n);
	printf("array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	ptr=arr;
	for(i=0;i<n;i++)
	{
		sum += *ptr;
		ptr++;
	}
	avg=(float)sum/n;
	printf("sum : %d\tAverage:%.2f\n",sum,avg);
	return 0;
}
