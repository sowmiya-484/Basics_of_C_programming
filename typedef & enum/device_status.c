#include<stdio.h>
enum state
{
	INIT,
	RUNNING,
	ERROR
};
void update_state(enum state *s,int value)
{
	*s=value;
}
int main()
{
	enum state s;
	int choice;
	printf("enter state (0-init,1-running,2-error):\n");
	scanf("%d",&choice);
	update_state(&s,choice);
	printf("\nCurrent State:");
	switch(s)
	{
		case INIT:
			printf("init\n");
			break;
		case RUNNING:
        		printf("running\n");
        		break;
    		case ERROR:
        		printf("error\n");
        		break;

		default:
			printf("Invalid state \n");
	}
	return 0;
}
