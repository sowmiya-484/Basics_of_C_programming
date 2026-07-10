#include<stdio.h>
int main()
{
        int j,i,n,found=0,max,min;
        printf("enter n:\n");
        scanf("%d",&n);
        int a[n];
        printf("enter array elements:\n");
        for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }
	max=min=a[0];
        for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if (a[i]<min)
		{
			min=a[i];
		}
	}
	int diff=max-min;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				found=1;
				break;
			}
		}
	}
	if(diff==n-1&&found==0)
	{
		printf("continous sequence\n");
	}
	else
	{
		printf("not continous sequence\n");
	}
	return 0;
}

