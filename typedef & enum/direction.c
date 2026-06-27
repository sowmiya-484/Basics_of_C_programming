#include <stdio.h>
enum direction
{
    cw,
    ccw
};
struct motor
{
    int speed;
    enum direction dir;
};
int main()
{
    struct motor m;
    printf("enter speed: ");
    scanf("%d", &m.speed);
    printf("enter direction (0 for cw, 1 for ccw): ");
    scanf("%d", (int *)&m.dir);
    printf("\nmotor details\n");
    printf("speed: %d\n", m.speed);
    if (m.dir==cw)
        printf("direction:cw\n");
    else
        printf("direction:ccw\n");
    return 0;
}
