#include<stdio.h>
int add(int a, int b)
{
	return a+b;
}
int main()
{
	int x,y;
	int(*ptr)(int,int);
	ptr=add;
	printf("enter two numbers: \n");
	scanf("%d%d",&x,&y);
	printf("sum=%d\n",ptr(x,y));
	return 0;
}
