#include<stdio.h>
enum unit
{
	TEMP,
	PRESSURE,
	HUMIDITY
};
struct sensor
{
	float value;
	enum unit u;
};
int main()
{
	struct sensor s;
	s.value=12.5;
	s.u = TEMP;
	printf("value: %.2f\n",s.value);
	printf("unit:%d\n",s.u);
	return 0;
}
