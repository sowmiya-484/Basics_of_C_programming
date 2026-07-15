#include<stdio.h>
typedef struct {
    char name[20];
    int  rollno;
    int  marks;
} Student;
void printResult(Student s)
{
	if(s.marks>=40)
	{
	   printf("%s (%d) : PASS",s.name,s.rollno);
	}
	else
	{
		printf("%s (%d) : FAIL",s.name,s.rollno);
	}
}
int main()
{
	Student s;
	printf("enter student name:\t");
	scanf("%s",s.name);
	printf("roll no :\t");
	scanf("%d",&s.rollno);
	printf("marks:\t");
	scanf("%d",&s.marks);
	printResult(s);
	return 0;
}

