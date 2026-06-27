#include <stdio.h>
enum menu
{
    add=1,
    subtract,
    multiply,
    divide,
    exit
};
int main()
{
    enum menu choice;
    int a,b;
    while (1)
    {
        printf("\nMENU\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", (int *)&choice);
        if (choice == exit)
        {
            printf("Exiting program...\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        switch (choice)
        {
        case add:
            printf("Result = %d\n", a + b);
            break;
        case subtract:
            printf("Result = %d\n", a - b);
            break;
        case multiply:
            printf("Result = %d\n", a * b);
            break;
        case divide:
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }
    return 0;
}
