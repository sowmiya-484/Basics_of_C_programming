#include<stdio.h>
int add();
int add(int a,int b)
{
	return a+b;
}
int main()
{
	while(1)
	{
	int num1,num2;
	printf("enter the num1: \n");
	scanf("%d",&num1);
	printf("enter the num2: \n");
	scanf("%d",&num2);
	int result=add(num1,num2);
        printf("Added value :%d\n",result);
	}
	return 0;
}
