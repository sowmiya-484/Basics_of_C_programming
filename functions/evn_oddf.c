#include<stdio.h>
int evn_odd(int num)
{
	if (num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	while(1)
	{
		int a,even;
		printf("enter the number : \n");
		scanf("%d",&a);
		even=evn_odd(a);
		if (even==1)
		{
			printf("the given number is even \n");
		}
		else
		{
			printf("the given number is odd\n");
		}
	}
	return 0;
}

