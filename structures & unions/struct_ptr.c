#include<stdio.h>
struct student 
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s1;
	struct student *ptr;
	ptr=&s1;
	printf("enter student details\n");
	printf("enter id:\n");
	scanf("%d",&ptr->id);
	printf("enter name:\n");
	scanf("%s",ptr->name);
	printf("enter marks:\n");
	scanf("%f",&ptr->marks);
	printf("\nstudent details\n");
	printf("NAME:%s\n",s1.name);
	printf("ID:%d\n",s1.id);
	printf("MARKS:%.2f\n",ptr->marks);
	return 0;
}
