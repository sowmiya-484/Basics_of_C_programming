#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s[100];
	int i,n,search,found=0;
	printf("enter no.of.students:\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("\nstudent%d details\n",i+1);
		printf("enter id:\t");
		scanf("%d",&s[i].id);
		printf("enter name:\t");
		scanf("%s",s[i].name);
		printf("enter marks:\n");
		scanf("%f",&s[i].marks);
	}
	printf("enter id for search:\n");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(search==s[i].id)
		{
			found=1;
			printf("founded student details\n id:%d\tname:%s\tmarks:%.2f\n",s[i].id,s[i].name,s[i].marks);
		}
	}
	if(found==0)
	{
		printf("student id not found\n");
	}
	return 0;
}




