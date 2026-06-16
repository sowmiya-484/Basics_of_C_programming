#include<stdio.h>
int main()
{
	int a=10, b=6 , result1;
	float result2;
	result1=a/b;
	result2 = (float)a/b;
	printf("result without use of type casting %d\n",result1);
	printf("result with use of type casting %f\n",result2);
	return 0;
}
