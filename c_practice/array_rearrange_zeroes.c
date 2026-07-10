#include<stdio.h>
int main()
{
        int i,n,j,temp;
        printf("enter n:\n");
        scanf("%d",&n);
        int a[n];
        printf("enter array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
		for(j=0;j<n-1;j++)
		{
			if(a[j]==0)
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
       
