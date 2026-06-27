#include <stdio.h>
enum signal
{
    red,
    yellow,
    green
};
int main()
{
    enum signal light;
    printf("Enter Signal (0-red, 1-yellow, 2-green): ");
    scanf("%d",(int *)&light);
    switch (light)
    {
        case red:
            printf("STOP\n");
            break;
        case yellow:
            printf("READY\n");
            break;
        case green:
            printf("GO\n");
            break;
        default:
            printf("Invalid Signal\n");
    }
    return 0;
}
