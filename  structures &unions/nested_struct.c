#include<stdio.h>
struct address
{
	char city[30];
	char state[30];
	int pincode;
};
struct student
{
	int id;
	char name[30];
	float marks;
	struct address addr;
};
int main()
{
	struct student s;
	printf("enter details\n id,name,marks:\n");
	scanf("%d%s%f",&s.id,s.name,&s.marks);
	printf("enter address details\n city,state,pincode:\n");
	scanf("%s%s%d",s.addr.city,s.addr.state,&s.addr.pincode);
	printf("\nprinting students details\n");
	printf("NAME:%s\tID:%d\tMARKS:%.2f\n",s.name,s.id,s.marks);
	printf("ADDRESS:- CITY:%s,STATE:%s,PINCODE:%d\n",s.addr.city,s.addr.state,s.addr.pincode);
	return 0;
}

