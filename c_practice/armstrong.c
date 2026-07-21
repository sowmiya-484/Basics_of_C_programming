#include<stdio.h>
long power(int base,int exp)
{
	long pow=1;
	for(int i=0;i<exp;i++)
	{
		pow=pow*base;
	}
	return pow;
}
int isArmstrong(int n)
{
	int c=0,sum=0;
	int temp=n;
	while(temp>0)
	{
		c++;
		temp=temp/10;
	}
	temp=n;
	while(temp>0)
	{
		sum= sum + power(temp%10,c);
		temp=temp/10;
	}
	if(n==sum)
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
	int n;
	printf("enter n:\n");
	scanf("%d",&n);
	if(isArmstrong(n))
	{
		printf("ARMSTRONG\n");
	}
	else
	{
		printf("NOT ARMSTRONG\n");
	}
	printf("3 digit armstrong number:\n");
	for(int i=100;i<1000;i++)
	{
		if(isArmstrong(i))
		{
			printf("%d\t",i);
		}
	}
		

	return 0;
}
