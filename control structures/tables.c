#include<stdio.h>
int main()
{
	int n;
	printf("enter the no. to get the multiplication table:\n");
	scanf("%d",&n);
	for (int i=1;i<11;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}

