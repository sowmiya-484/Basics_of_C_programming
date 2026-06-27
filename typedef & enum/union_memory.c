#include <stdio.h>
union data
{
    int i;
    float f;
    char c;
};
int main()
{
    union data d;
    d.i = 100;
    printf("int = %d\n", d.i);
    d.f = 25.5;
    printf("float = %.2f\n", d.f);
    printf("int after float = %d\n", d.i);
    d.c = 'a';
    printf("char = %c\n", d.c);
    printf("int after char = %d\n", d.i);
    return 0;
}
