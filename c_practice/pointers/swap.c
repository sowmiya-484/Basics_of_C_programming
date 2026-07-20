#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	printf("enter two numbers:\n");
	scanf("%d%d",&a,&b);
	printf("before: a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("\nafter: a=%d,b=%d",a,b);
	return 0;
}
