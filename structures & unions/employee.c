#include<stdio.h>
struct employee
{
	int id;
	float salary;
	char dep[20];
};
int main()
{
	int i;
	struct employee e[3];
	for(i=0;i<3;i++)
	{
		printf("enter employee%d details \n",i+1); 
		printf("id\tsalary\tdep:\n");
		scanf("%d\t%f\t%s",&e[i].id,&e[i].salary,e[i].dep);
	}
	float highest_salary=e[0].salary;
	int index=0;
	for (i=1;i<3;i++)
	{
		if(highest_salary<e[i].salary)
		{
			highest_salary=e[i].salary;
			index=i;
		}
	}
	printf("highest salary:%.2f\n",highest_salary);
	printf("the details of employee\n id:%d\tdep:%s\n",e[index].id,e[index].dep);
	return 0;
}
