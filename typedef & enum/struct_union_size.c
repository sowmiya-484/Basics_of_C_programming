#include <stdio.h>
struct sample
{
    int i;
    float f;
    char c;
};
union sample2
{
    int i;
    float f;
    char c;
};
int main()
{
    printf("size of structure = %lu\n", sizeof(struct sample));
    printf("size of union = %lu\n", sizeof(union sample2));
    return 0;
}
