#include<stdio.h>
int main()
{
	int i,j,n,temp;
	float sum=0,avg;
	printf("enter n:\n");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=arr;
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(*(ptr+i)<*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("largest:%d\n",*ptr);
	printf("smallest:%d\n",*(ptr+(n-1)));
	for(i=0;i<n;i++)
	{
		sum= sum + (*(ptr+i));
	}
	avg=sum/n;
	printf("Average:%.2f\n",avg);
	return 0;
}

