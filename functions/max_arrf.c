#include<stdio.h>
int array(int arr[],int n)
{
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
}
int max_arr(int arr[],int n)
{
	int max=arr[0];
	for(int i=1;i<n;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
        int arr[200],n;
        printf("enter the array size:\n");
        scanf("%d",&n);
        array(arr,n);
	printf("maximum value in the array is %d\n",max_arr(arr,n));
        return 0;
}


