#include <stdio.h>
union value
{
    int i;
    float f;
};
struct data
{
    int id;
    union value v;
};
int main()
{
    struct data d;
    d.id = 1;
    d.v.i = 100;
    printf("id = %d\n", d.id);
    printf("int = %d\n", d.v.i);
    d.v.f = 45.5;
    printf("float = %.2f\n", d.v.f);
    return 0;
}
