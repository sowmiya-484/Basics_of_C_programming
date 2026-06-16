#include<stdio.h>
int global_var = 10;
void var()
{
	int local_var=20;
	static int stat_var=1;
	stat_var++;
	local_var++;
	printf("global variable=%d \n",global_var);
	printf("staic variable =%d \n",stat_var);
	printf("local_var = %d \n", local_var);
}
int main()
{
	var();
	
	var();

	var();

	return 0;
}
	
