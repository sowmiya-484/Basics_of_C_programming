#include<stdio.h>
struct student;
struct student{
	int roll_no;
	char name[20];
	float mark;
	double percentage;
	};
int main()
{
	struct student student1;
	printf("the size of structure %zu \n",sizeof(student1));
	return 0;
}

