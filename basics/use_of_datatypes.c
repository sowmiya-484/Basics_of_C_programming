#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	char d[10];
	double e;
	
	printf("the use of diiferent datatypes\n");
	printf("enter integer: \n");
	scanf("%d",&a);
	printf("it is an integer %d\n",a);
	printf("enter the float value: \n");
	scanf(" %f",&b);
	printf("it is float %f\n",b);
	printf("enter character: \n");
	scanf(" %c",&c);
	printf("the character %c\n",c);
	printf("enter the string : \n");
	scanf("%s",d);
	printf("the string %s\n",d);
	printf("enter the double value : \n");
	scanf("%lf",&e);
	printf("the double value is %lf\n",e);
}
