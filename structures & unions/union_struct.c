#include<stdio.h>
union data
{
	int i;
	float f;
	char c;
};
struct student
{
	int id;
	char name[50];
	union data d;
};
int main()
{
	struct student s;
	s.id=101;
	sprintf(s.name,"sowmiya");
	s.d.i = 500;
	printf("ID     :%d\nName   :%s\nMarks:   %d\n",s.id,s.name,s.d.i);
	return 0;
}
