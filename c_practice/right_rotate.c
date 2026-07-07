#include<stdio.h>
int main()
{
        int i,n,temp;
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
		temp=*(ptr+n-1);
		*(ptr+n-1)=*(ptr+i);
		*(ptr+i)=temp;
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(ptr+i));
	}
	return 0;
}
