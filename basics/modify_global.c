#include<stdio.h>
int num=10;
int modify()
{
	num++;
}
int main()
{
	printf("before: %d\n",num);
	modify();
	printf("after: %d\n",num);
	return 0;
}

