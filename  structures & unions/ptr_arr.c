#include<stdio.h>
struct student
{
	int id;
	char name[30];
	float marks;
};
int main()
{
	struct student s1,s2,s3;
	struct student *ptr[3];
	int i;
	ptr[0]=&s1;
	ptr[1]=&s2;
	ptr[2]=&s3;
	for(i=0;i<3;i++)
	{
		printf("\n enter student%d details\nenter\n",i+1);
		printf("id:\n");
		scanf("%d",&ptr[i]->id);
		printf("name:\n");
		scanf("%s",ptr[i]->name);
		printf("marks:\n");
		scanf("%f",&ptr[i]->marks);
	}
	printf("\nstudent details\n");
	for(i=0;i<3;i++)
	{
		printf("\nstudent%d\nID:%d\nNAME:%s\nMARKS:%.2f\n",i+1,ptr[i]->id,ptr[i]->name,ptr[i]->marks);
	}
	return 0;
}
