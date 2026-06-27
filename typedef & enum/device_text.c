#include <stdio.h>
enum status
{
    off,
    on
};
struct device
{
    int device_id;
    enum status state;
};
int main()
{
    struct device d;
    printf("enter device id: ");
    scanf("%d", &d.device_id);
    printf("enter status (0-off, 1-on): ");
    scanf("%d",(int*)&d.state);
    printf("\ndevice details\n");
    printf("device id: %d\n", d.device_id);
    if (d.state==on)
        printf("status:on\n");
    else if(d.state==off)
        printf("status:off\n");
    else
	    printf("invalid status\n");
    return 0;
}
