#include<stdio.h>
struct student
{
	int id;
	char name[50];
	float marks;
};
int main()
{
	struct student s[100],temp;
	int n,i,j;
	printf("enter  no. of students :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nstudents%d\n",i+1);
		printf("enter ID:\n");
		scanf("%d",&s[i].id);
		printf("enter name:\n");
		scanf("%s",s[i].name);
		printf("enter marks:\n");
		scanf("%f",&s[i].marks);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i].marks>s[j].marks){
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\nstudents sorted by marks\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%.2f\n",s[i].id,s[i].name,s[i].marks);
	}
	return 0;
}

		
