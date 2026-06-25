#include <stdio.h>
struct sample_struct
{
    int i;
    float f;
    char c;
};
union sample_union
{
    int i;
    float f;
    char c;
};
int main()
{
    printf("Size of structure = %lu bytes\n", sizeof(struct sample_struct));
    printf("Size of union = %lu bytes\n", sizeof(union sample_union));
    return 0;
}
