#include <stdio.h>
enum control
{
    start = 10,
    stop = 20,
    pause = 30
};
int main()
{
    enum control c;
    c = start;
    printf("start=%d\n",start);
    printf("stop=%d\n",stop);
    printf("pause=%d\n",pause);
    printf("\ncurrent control value = %d\n", c);
    return 0;
}
