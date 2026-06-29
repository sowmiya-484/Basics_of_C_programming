#include<stdio.h>
struct student
{
    int roll;
    char name[30];
};
int main()
{
    struct student s[3];
    struct student *p[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter roll and name: ");
        scanf("%d%s",&s[i].roll,s[i].name);
        p[i]=&s[i];
    }
    printf("\nstudent details\n");
    for(i=0;i<3;i++)
    {
        printf("%d %s\n",p[i]->roll,p[i]->name);
    }
    return 0;
}
