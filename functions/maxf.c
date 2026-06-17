#include<stdio.h>
int max(int a, int b){
	int largest=a>b?a:b;
	return largest;
}
int main(){
	int num1,num2;
	printf("enter the num1 , num2 :\n");
	scanf("%d%d",&num1,&num2);
	printf("the maximum value of %d(num1) and %d(num2) is %d \n",num1,num2,max(num1,num2));
	return 0;
}
