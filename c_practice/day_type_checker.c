#include<stdio.h>
typedef enum {
    SUNDAY = 0, 
    MONDAY, 
    TUESDAY, 
    WEDNESDAY, 
    THURSDAY, 
    FRIDAY, 
    SATURDAY
} Day;
void checkDayType(Day d)
{
	if(d==SUNDAY||d==SATURDAY)
	{
		printf("weekend\n");
	}
	else
	{
		printf("weekday\n");
	}
}
int main()
{
	Day d;
	int n;
	printf("enter integer(0-6)(sunday is 0): \n");
	scanf("%d",&n);
	checkDayType(n);
	return 0;
}
