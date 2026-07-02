#include<stdio.h>
int rev(int n)
{
	int rever=0;
	while(n>0)
	{
		int rem=n%10;
		rever=(rever*10)+rem;
		n=n/10;
	}
	return rever;
}

int main()
{
        int n,i,count=0;
        printf("enter the no of elements in array:\n");
        scanf("%d",&n);
        int arr[n];
        printf("enter the array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
                if((rev(arr[i]))==arr[i])
                {
                        count++;
                }
        }
	printf("\n%d\n",count);
        return 0;
}
