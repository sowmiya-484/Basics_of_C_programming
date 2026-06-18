#include<stdio.h>
int array(int arr[],int n)
{
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
}
int printarr(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("element at %d: %d\n",i,arr[i]);
	}
}
int main()
{
        int arr[200],n;
        printf("enter the array size:\n");
        scanf("%d",&n);
        array(arr,n);
	printarr(arr,n);
        return 0;
}


