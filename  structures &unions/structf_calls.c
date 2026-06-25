#include<stdio.h>
struct student 
{
	int id;
	float marks;
};
void modify_struct(struct student s)
{
	s.marks=90;
	printf("\ninside modify_struct function using call by value  of s1:%.2f",s.marks);
}
void modify_struct_ptr(struct student *s)
{
	s->marks=80;
	printf("\ninside the function call by reference of s2: %.2f",s->marks);
}
int main()
{
	struct student s1={1,75};
	struct student s2={2,85};
	printf("\nbefore calling functions\ns1:%.2f,s2=%.2f",s1.marks,s2.marks);
	modify_struct(s1);
	printf("\nvalue of s1 after calling function using call by value:%.2f\n",s1.marks);
	modify_struct_ptr(&s2);
	printf("\nvalue of s2 after calling function using call by reference:%.2f\n",s2.marks);
	return 0;
}
