#include<stdio.h>
typedef struct
{
	int id;
	char name[20];
	float marks;
}student;
int main()
{
	student s1;
	s1.id=101;
	sprintf(s1.name,"sowmiya");
	s1.marks=95.5;
    	printf("ID    :%d\n",s1.id);
    	printf("Name  :%s\n",s1.name);
    	printf("Marks :%.2f\n",s1.marks);
	return 0;
}

