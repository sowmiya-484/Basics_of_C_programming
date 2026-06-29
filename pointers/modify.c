#include <stdio.h>
void change(int *p)
{
    *p =100;
}
int main()
{
    int x=20;
    change(&x);
    printf("%d\n", x);
    return 0;
}
