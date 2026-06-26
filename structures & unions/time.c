#include<stdio.h>
struct time
{
	int h,min,seconds;
};
int main()
{
	struct time t;
	printf("enter hours minutes seconds: \n");
	scanf("%d%d%d",&t.h,&t.min,&t.seconds);
	int tot_seconds=(t.h*3600)+(t.min*36)+t.seconds;
	printf("total seconds:%d\n",tot_seconds);
	return 0;
}
