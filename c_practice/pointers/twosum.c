#include<stdio.h>
#include<stdlib.h>
int *twosum(int *nums,int numsSize,int target,int *returnSize)
{
	for(int i=0;i<numsSize-1;i++)
	{
		for(int j=0;j<numsSize;j++)
		{
			if (nums[i]+nums[j]==target)
			{
				int *ans=(int*)malloc(2*sizeof(int));
				ans[0]=i;
				ans[1]=j;
				*returnSize=2;
				return ans;
			}
		}
	}
	*returnSize=0;
	return NULL;
}
int main()
{
	int n,r;
	printf("enter n:\n");
	scanf("%d",&n);
	int num[n];
	printf("array elements:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	int target,*ans;
	printf("enter target:\n");
	scanf("%d",&target);
	ans=twosum(num,n,target,&r);
	printf("return size:%d\n",r);
	if(ans!=NULL)
	{
		for(int i=0;i<r;i++)
		{
			printf("%d ",num[ans[i]]);
		}
	}
	else
	{
		printf("no pair found\n");
	}
	return 0;

}

