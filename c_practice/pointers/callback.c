#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int calculate(int x,int y,int(*operation)(int,int))
{
	return operation(x,y);
}
int main()
{
	int num1=10;
	int num2=20;
	int result;
	result=calculate(num1,num2,add);
	printf("result:%d\n",result);
	return 0;
}
