#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("-------------------------------------------\n");
	for(int i=0;i<=n;i++)
	{
		sum+=i;
		printf("sum of %d is %d\n",i,sum);
	}
	return 0;
}
		
