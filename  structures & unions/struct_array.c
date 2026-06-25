#include<stdio.h>
struct student
{
        int id;
        char name[50];
        float marks;
};
int main()
{
        struct student s[5];
	for(int i=0;i<5;i++)
	{
        	printf("enter student%d details\n",i+1);
        	printf("id:\t");
        	scanf("%d",&s[i].id);
        	printf("name:\t");
        	scanf("%s",s[i].name);
        	printf("marks:\t");
        	scanf("%f",&s[i].marks);
	}
	for(int i=0;i<5;i++)
	{
		printf("STUDENT %d DETAILS\n name:%s\tid:%d\tmarks:%.2f\n",i+1,s[i].name,s[i].id,s[i].marks);
	}
        return 0;
}
