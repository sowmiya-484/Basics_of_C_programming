#include <stdio.h>
enum error_code
{
    success = 0,
    file_not_found,
    access_denied,
    out_of_memory,
    unknown_error
};
int main()
{
    enum error_code error;
    printf("enter error code (0-4): ");
    scanf("%d", (int *)&error);
    switch (error)
    {
    case success:
        printf("operation successful.\n");
        break;
    case file_not_found:
        printf("error: file not found.\n");
        break;
    case access_denied:
        printf("error: access denied.\n");
        break;
    case out_of_memory:
        printf("error: out of memory.\n");
        break;
    case unknown_error:
        printf("error: unknown error.\n");
        break;
    default:
        printf("invalid error code.\n");
    }
    return 0;
}
