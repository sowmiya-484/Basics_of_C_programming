#include <stdio.h>
typedef unsigned char u8;
int main()
{
    u8 age = 20;
    printf("Age = %u\n", age);
    printf("Size of u8 = %zu bytes\n", sizeof(u8));
    return 0;
}
