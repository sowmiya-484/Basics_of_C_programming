#include <stdio.h>
typedef struct
{
    int id;
    char name[50];
    float marks;
} student;
void modify(student *s)
{
    s->id = 101;
    sprintf(s->name, "sowmiya");
    s->marks = 95.5;
}
int main()
{
    student s;
    modify(&s);
    printf("student details\n");
    printf("id    : %d\n", s.id);
    printf("name  : %s\n", s.name);
    printf("marks : %.2f\n", s.marks);
    return 0;
}
