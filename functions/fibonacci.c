#include<stdio.h>
int fibonacci(int n)
{
	int a=0,b=1,c,i;
	for(i=0;i<n;i++)
	{
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
}
int main()
{
	int n;
	printf("enter number:\n");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	fibonacci(n);
	return 0;
}
