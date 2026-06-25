#include<stdio.h>
struct student
{
	char name[50];
	float marks;
};
int main()
{
	int n,i;
	float sum=0,avg;
	printf("\nenter no.of students:");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("\n enter name of student%d:",i+1);
		scanf("%s",s[i].name);
		printf("\n enter marks:");
		scanf("%f",&s[i].marks);
		sum+=s[i].marks;
	}
	avg=sum/n;
	printf("\naverage marks:%.2f\n",avg);
	return 0;
}
