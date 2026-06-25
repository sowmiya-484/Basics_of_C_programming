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
	printf("enter student details\n");
	printf("id:\t");
	scanf("%d",&s1.id);
	printf("name:\t");
	scanf("%s",s1.name);
	printf("marks:\t");
	scanf("%f",&s1.marks);
	printf("name:%s\tid:%d\tmarks:%.2f\n",s1.name,s1.id,s1.marks);
	return 0;
}
