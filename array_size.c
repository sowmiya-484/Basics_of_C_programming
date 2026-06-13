#include<stdio.h>
int main()
{
	int a[3]={10,20,30};
	printf("the size of the array:%zu bytes\n",sizeof(a));
	printf("the size of zeroth element :%zu bytes\n",sizeof(a[0]));
	printf("the size of 1st element :%zu bytes\n ",sizeof(a[1]));
	printf("the size of 2nd element : %zu bytes\n",sizeof(a[2]));
	return 0;
}
