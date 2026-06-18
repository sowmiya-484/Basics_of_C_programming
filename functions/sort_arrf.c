#include<stdio.h>
int array(int arr[],int n){
        printf("enter the elements:\n");
        for(int i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);}}
int printarr(int arr[],int n){
        for(int i=0;i<n;i++){
                printf("element at %d: %d\n",i,arr[i]); }}
int sort(int a[],int n){
        int temp,i,j;
        for (i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
                	temp=a[i];
                	a[i]=a[j];
                	a[j]=temp; }}}}
int main()
{
        int arr[200],n;
        printf("enter the array size:\n");
        scanf("%d",&n);
        array(arr,n);
        printarr(arr,n);
        printf("sorted array\n");
        sort(arr,n);
        printarr(arr,n);
        return 0;
}
