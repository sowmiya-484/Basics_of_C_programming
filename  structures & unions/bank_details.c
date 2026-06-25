#include<stdio.h>
struct account
{
	char  acc_holder_name[50];
	int  acc_no;
	float balance;
};
void display_balance(struct account *a)
{
	printf("\naccount_holder_name: %s\n",a->acc_holder_name);
	printf("account_number: %d\n",a->acc_no);
	printf("current balance: %.4f\n",a->balance);
}
void deposit(struct account *a)
{
	float deposit_amt;
	printf("enter  the amount to be deposited: \n");
	scanf("%f",&deposit_amt);
	a->balance+=deposit_amt;
	display_balance(a);
}
void withdrawal(struct account *a)
{
	float withdrawal_amt;
	printf("enter the amount to be withdrwal: \n");
	scanf("%f",&withdrawal_amt);
	if(withdrawal_amt > a->balance)
	{
		printf("INSUFFICIENT BALANCE!!!\n");
	}
	else
	{
	printf("sufficient balance\n");
	a->balance-=withdrawal_amt;
	}
	display_balance(a);
}
int main()
{
	struct account a1= {"sowmiya",4787,100};
	int n;
	while(1)
	{
		printf("\n1-balance\n2-deposit\n3-withdrwal\n4-exit\nenter user choice:\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				display_balance(&a1);
				break;
			case 2:
				deposit(&a1);
				break;
			case 3:
				withdrawal(&a1);
				break;
			case 4:
				printf("exiting\n");
				return 0;
			default:
				printf("not defined choice.. exiting...");
				return 0;
		}
	}
	return 0;
}
