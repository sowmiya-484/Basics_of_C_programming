#include<stdio.h>
int main()
{
	int x;
	int *p=&x;
	*p=50;
	printf("%d\n",x);
	return 0;
}
