#include <stdio.h>
int main()
{
    int x = 25;
    int *p;
    int **pp;
    p = &x;
    pp = &p;
    printf("Value of x = %d\n", x);
    printf("Using p = %d\n", *p);
    printf("Using pp = %d\n", **pp);
    printf("\n");
    printf("Address of x = %p\n", &x);
    printf("Address stored in p = %p\n", p);
    printf("Address stored in pp = %p\n", *pp);
    return 0;
}
