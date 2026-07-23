#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int main()
{
	int a,b,choice;
	printf("enter two numbers: \n");
	scanf("%d%d",&a,&b);
	int (*ptr)(int,int);
	printf("1-add,2-sub,3-mul,4-div\n");
	printf("enter choice: \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		ptr=add;
	}
	else if(choice==2)
	{
		ptr=sub;
	}
	else if(choice==3)
	{
		ptr=mul;
	}
	else if(choice==4)
	{
		ptr=div;
	}
	else
	{
		printf("invalid choice\n");
		return 0;
	}
	printf("result=%d\n",ptr(a,b));
	return 0;
}
