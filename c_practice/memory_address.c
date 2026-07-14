#include<stdio.h>
static int s=10;
int main()
{
	int a=20;
	printf("address of static variable : %p\n",(void*)&s);
	printf("address of stack variable : %p\n",(void*)&a);
	return 0;
}
