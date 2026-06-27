#include <stdio.h>
typedef int* intptr;
void swap(intptr a, intptr b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    swap(&x, &y);
    printf("\nAfter Swapping:\n");
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    return 0;
}
