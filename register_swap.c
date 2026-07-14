#include<stdio.h>
int main()
{
	register int a=10,b=20,temp;
	temp=a;
	a=b;
	b=temp;
	printf("a = %d\nb = %d\n",a,b);
	return 0;
}
