#include<stdio.h>
int square(int n)
{
	return n*n;
}
int cube(int n)
{
	return n*n*n;
}
int main()
{
	int n;
	int (*ptr)(int);
	printf("enter n: \n");
	scanf("%d",&n);
	ptr=square;
	printf("square=%d\n",ptr(n));
	ptr=cube;
	printf("cube=%d\n",ptr(n));
	return 0;
}
