#include <stdio.h>
int main()
{
    int a[] = {10,20,30};
    int *p = a;
    printf("before p++\n");
    printf("*p = %d\n", *p);
    p++;
    printf("after p++\n");
    printf("*p = %d\n", *p);
    p = a;
    printf("\nbefore (*p)++\n");
    printf("*p = %d\n", *p);
    (*p)++;
    printf("after (*p)++\n");
    printf("*p = %d\n", *p);
    printf("array:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
