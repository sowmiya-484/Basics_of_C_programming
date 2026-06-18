#include<stdio.h>
int array(int arr[],int n)
{
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
}
int sum_avg(int arr[],int n)
{
        int sum =0;
        for(int i=0;i<n;i++)
        {
		sum+=arr[i];
        }
        float avg=(float)sum/n;
	printf("SUM:%d\nAVERAGE:%.2f\n",sum,avg);
}
int main()
{
        int arr[200],n;
        printf("enter the array size:\n");
        scanf("%d",&n);
        array(arr,n);
        sum_avg(arr,n);
        return 0;
}
   
