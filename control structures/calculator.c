#include<stdio.h>
int main(){
	while(1){
	float num1,num2,result;
	printf("enter the value of num1:\n");
	scanf("%f",&num1);
	printf("enter the value of num2:\n");
	scanf("%f",&num2);
	int calci;
	printf("enter the 1=add,2=sub,3=mul,4=div:\n");
	scanf("%d",&calci);
	switch(calci)
	{
		case(1):
		      result=num1+num2;
		      printf("the  result of addition is %.2f\n",result);
		      break;
		case(2):
		      result=num1-num2;
		      printf("the result of subtraction is %.2f\n",result);
		      break;
		case(3):
		      result=num1*num2;
		      printf("the result of multiplication is %.2f\n",result);
		      break;
		case(4):
		      result=num1/num2;
		      printf("the result of division is %.2f\n",result);
		      break;
		default:
		      printf("invalid user input\n");}
	}
	return 0;
}
