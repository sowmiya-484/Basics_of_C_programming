#include<stdio.h>
typedef enum 
{
       	RED, 
	GREEN, 
	YELLOW 
} Signal;
typedef struct {
    Signal color;
    int    duration;   
} TrafficLight;
Signal getNextSignal(Signal current)
{
	if (current==RED)
		return GREEN;
	else if (current==GREEN)
		return YELLOW;
	else
		return RED;
}
int main()
{
	TrafficLight t={RED,30};
	Signal n=getNextSignal(t.color);
	if(n==0)
	{
		printf("current : yellow ,next-> RED");
	}
	else if(n==1)
	{
		printf("current : red , next-> GREEN");
	}
	else
	{
		printf("current : green ,next-> YELLOW");
	}
	return 0;
}

	
