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
	int (*operation[4])(int ,int)={add,sub,mul,div};
	printf("enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("0-add,1-sub,2-mul,3-div\n");
	printf("enter choice : \n");
	scanf("%d",&choice);
	printf("result=%d\n",operation[choice](a,b));
	return 0;
}

