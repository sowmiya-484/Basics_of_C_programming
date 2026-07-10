#include<stdio.h>
int main()
{
        int i,n,count=0;
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
                if(a[i]==(a[i+1]-1)||a[i+1]==a[i]-1)
                {
                       break;
                }
		else
		{
			printf("Invalid sequence\n");
			return 0;
		}
	}
	printf("valid sequence");
	return 0;
        }
