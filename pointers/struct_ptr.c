#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
void update(struct student *p)
{
    p->marks = p->marks + 5;
}
int main()
{
    struct student s;
    printf("enter roll: ");
    scanf("%d",&s.roll);
    printf("enter name: ");
    scanf("%s",s.name);
    printf("enter marks: ");
    scanf("%f",&s.marks);
    update(&s);
    printf("\nstudent details\n");
    printf("roll:%d\tname:%s\tmarks:%.2f\n",s.roll,s.name,s.marks);
    return 0;
}
