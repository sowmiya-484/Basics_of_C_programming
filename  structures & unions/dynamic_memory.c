#include<stdio.h>
#include<stdlib.h>
struct student 
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student *ptr;
	ptr=(struct student *) malloc(sizeof(struct student));
	if(ptr==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("enter student id:\n");
	scanf("%d",&ptr->id);
	printf("enter student name:\n");
	scanf("%s",ptr->name);
	printf("enter student mark:\n");
	scanf("%f",&ptr->marks);
	printf("student details\nID:%d\tNAME:%s\tMARK:%.2f\n",ptr->id,ptr->name,ptr->marks);
	return 0;
}

