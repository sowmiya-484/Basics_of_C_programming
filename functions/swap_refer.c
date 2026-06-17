#include<stdio.h>
int swap(int *x,int *y){
	int temp=*x;
	*x = *y;
	*y =temp;
	printf("values of a and b inside the function is %d and %d \n",*x,*y);
}
int main()
{
	int a=45,b=63;
	printf("valud of a and b before the function call is %d and %d\n",a,b);
	swap(&a,&b);
	printf("value of a and b after the function call is %d and %d\n",a,b);
	return 0;
}
