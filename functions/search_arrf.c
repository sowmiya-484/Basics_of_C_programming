#include<stdio.h>
int array(int arr[],int n){
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);}}
int search(int a[],int n,int key){
        int temp,i,j;
        for (i=0;i<n-1;i++)
	{
		if(a[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
        int arr[200],n,key;
        printf("enter the array size:\n");
        scanf("%d",&n);
        array(arr,n);
        printf("enter the element to be searched:\n");
	scanf("%d",&key);
	printf("the element is found at %d \n",search(arr,n,key));
        return 0;
}
