#include<stdio.h>
int main()
{
        int i,n,count=0,counts=0;
        printf("enter n:\n");
        scanf("%d",&n);
        int a[n];
        printf("enter array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
                while(a[i]!=0)
		{
			if(a[i]%2==1)
			{
				counts++;
			}
				a[i]=a[i]/2;
		}
		if(counts%2!=0)
		{
			count++;
		}
        }
	printf("even parity:%d\n",count);
	return 0;
}
