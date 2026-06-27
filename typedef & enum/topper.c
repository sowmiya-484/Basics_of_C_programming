#include <stdio.h>
typedef struct
{
    int id;
    char name[50];
    float marks;
} student;
int main()
{
    student s[3];
    int i, topper ;
    for (i = 0; i < 3; i++)
    {
        printf("enter student %d ID: ", i + 1);
        scanf("%d", &s[i].id);
        printf("enter student %d name: ", i + 1);
        scanf("%s", s[i].name);
        printf("enter student %d marks: ", i + 1);
        scanf("%f", &s[i].marks);
    }
    for (i=0; i < 3; i++)
    {
        if (s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }
    printf("\nTopper Details\n");
    printf("ID    : %d\n", s[topper].id);
    printf("Name  : %s\n", s[topper].name);
    printf("Marks : %.2f\n", s[topper].marks);
    return 0;
}
