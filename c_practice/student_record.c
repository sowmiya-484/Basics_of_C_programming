#include <stdio.h>
struct student
{
    int rollno;
    char name[50];
    float marks[5];
    float total;
    float average;
};
void readStudent(struct student *s)
{
    int i;
    printf("Enter Roll No: ");
    scanf("%d", &s->rollno);
    printf("Enter Name: ");
    scanf("%49s", s->name);
    printf("Enter 5 Marks:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%f", &s->marks[i]);
    }
}
void calculate(struct student *s)
{
    int i;
    s->total = 0;
    for(i = 0; i < 5; i++)
    {
        s->total += s->marks[i];
    }
    s->average = s->total / 5;
}
int findTopper(struct student s[], int n)
{
    int i, topper = 0;
    for(i = 1; i < n; i++)
    {
        if(s[i].average > s[topper].average)
            topper = i;
    }
    return topper;
}
void printStudent(struct student *s)
{
    int i;
    printf("\nRoll No : %d\n", s->rollno);
    printf("Name    : %s\n", s->name);
    printf("Marks   : ");
    for(i = 0; i < 5; i++){
        printf("%.2f ", s->marks[i]);
    }
    printf("\nTotal   : %.2f\n", s->total);
    printf("Average : %.2f\n", s->average);
}
int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];
    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        readStudent(&s[i]);
        calculate(&s[i]);
    }
    int topper = findTopper(s, n);
    for(i = 0; i < n; i++)
    {
        printStudent(&s[i]);
    }
    printf("\nTopper: %s\n", s[topper].name);
    return 0;
}
