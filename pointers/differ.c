#include <stdio.h>
int main()
{
    int x = 25;
    int *p = &x;
    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("*p = %d\n", *p);       
    return 0;
}
