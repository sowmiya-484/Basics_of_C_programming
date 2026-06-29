#include <stdio.h>
struct student
{
    int roll;
    char name[30];
    float marks;
};
int main()
{
    struct student s;
    struct student *ptr;
    ptr=&s;
    printf("enter roll no: ");
    scanf("%d",&ptr->roll);
    printf("enter name: ");
    scanf("%s",ptr->name);
    printf("enter marks: ");
    scanf("%f",&ptr->marks);
    printf("\nstudent details\nroll:%d\tname:%s\tmarks:%.2f\n",ptr->roll,ptr->name,ptr->marks);
    return 0;
}
