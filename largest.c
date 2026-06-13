#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c : \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is largest number\n");
	}
	else if(b>a && b>c)
	{
		printf("b is largest number\n");
	}
	else
	{
		printf("c is largest number\n");
	}
	return 0;
}
