#include <stdio.h>
typedef struct
{
    int id;
    char name[50];
    float marks;
} student;
void display(student s)
{
    printf("\nstudent details\n");
    printf("id    : %d\n", s.id);
    printf("name  : %s\n", s.name);
    printf("marks : %.2f\n", s.marks);
}
int main()
{
    student s;
    printf("enter student id: ");
    scanf("%d", &s.id);
    printf("enter student name: ");
    scanf("%s", s.name);
    printf("enter student marks: ");
    scanf("%f", &s.marks);
    display(s);
    return 0;
}
