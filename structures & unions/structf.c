#include<stdio.h>
struct student 
{
	int id;
	char name[50];
	float marks;
};
void printstudent(struct student s)
{
	printf("ID:%d\n",s.id);
	printf("name: %s\n",s.name);
	printf("marks:%.2f\n",s.marks);
}
int main()
{
	struct student s1={49,"sowmiya",78.9};
	printf("\nstudent details\n");
	printstudent(s1);
	return 0;
}

