#include<stdio.h>
int main()
{
	int principal_amt, rate,time;
	printf("enter the initial amount : \n");
	scanf("%d",&principal_amt);
	printf("enter the rate of interest : \n");
	scanf("%d",&rate);
	printf("enter the time period: \n");
	scanf("%d",&time);
	int compound_amt,compound_int;
	compound_amt=principal_amt;
	for (int i=1;i<=time;i++)
	{
		compound_amt += compound_amt*rate/100;
		compound_int = compound_amt-principal_amt;
		printf("the compound interest is %d \n",compound_int);
	}
	return 0;
}
