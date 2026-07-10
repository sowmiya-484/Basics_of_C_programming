#include<stdio.h>
int i;
void inputArray(int arr[],int n)
{
	printf("enter array elements:\n");
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
}
int findSecondLargest(int arr[],int n)
{
	int second,largest;
	second=largest=arr[0];
	for(i=1;i<n;i++)
	{
		if(arr[i]>largest)
		{
			second=largest;
			largest=arr[i];
		}
		else if(arr[i]>second || arr[i]!=largest)
		{
			second=arr[i];
		}
		else
			return -1;
	}
	return second;
}
void reverseArray(int arr[],int n)
{
	int temp;
	for(i=0;i<n/2;i++)
	{
		temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	printf("\nreversed array\n");
	for(i=0;i<n;i++)
	{
	printf("%d\t",arr[i]);
	}
}
void countEvenOdd(int arr[],int n,int *even,int *odd)
{
	//int ce= *even,co = *odd;
	for( i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			*even+=1;
		}
		else
		{
			*odd+=1;
		}
	}
}
			
int main()
{
	int n,e=0,o=0;
	printf("enter n(max10):\n");
	scanf("%d",&n);
	int arr[n];
	inputArray(arr,n);
	printf("Second Largest No. %d\n",findSecondLargest(arr,n));
	reverseArray(arr,n);
	countEvenOdd(arr,n,&e,&o);
	printf("Even: %d\tOdd:%d\n",e,o);
	return 0;
}
