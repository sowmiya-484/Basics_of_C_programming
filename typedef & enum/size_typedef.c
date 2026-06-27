#include <stdio.h>
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;
typedef unsigned long  u64;
int main()
{
    u8  a = 255;
    u16 b = 65000;
    u32 c = 4000000000U;
    u64 d = 10000000000UL;
    printf("u8  = %u\n", a);
    printf("u16 = %u\n", b);
    printf("u32 = %u\n", c);
    printf("u64 = %lu\n", d);
    printf("\nSizes:\n");
    printf("Size of u8  = %zu bytes\n", sizeof(u8));
    printf("Size of u16 = %zu bytes\n", sizeof(u16));
    printf("Size of u32 = %zu bytes\n", sizeof(u32));
    printf("Size of u64 = %zu bytes\n", sizeof(u64));
    return 0;
}
