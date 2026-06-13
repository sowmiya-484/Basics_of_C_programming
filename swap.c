#include<stdio.h>
int main()
{
	int a=10, b=20, temp;
	printf("the value of 'a' before swap %d\n",a);
	printf("the value of 'b' brfore swap %d\n",b);
	temp=a;
	a=b;
	b=temp;
	printf("the value of 'a' after swap %d\n",a);
	printf("the value of 'b' after swap %d\n",b);
	return 0;
}
