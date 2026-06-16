#include<stdio.h>
int main()
{
	const float pi=3.141;
	float area,r;
	printf("enter the radius of circle : \n");
	scanf("%f",&r);
	area=2*pi*r;
	printf("the area of circle is %f\n",area);
	return 0;
}
