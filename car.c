#include<stdio.h>
struct engine
{
	int engine_no;
	int engine_capacity;
};
struct car 
{
	char name[50];
	char model[50];
	int price;
	struct engine eng;
};
int main()
{
	struct car c;
	printf("enter car name,model,price:\n");
	scanf("%s%s%d",c.name,c.model,&c.price);
	printf("enter engine_no,engine_capacity:\n");
	scanf("%d%d",&c.eng.engine_no,&c.eng.engine_capacity);
	printf("\nprinting car details\n");
	printf("Car Name : %s\n",c.name);
	printf("Model : %s\n",c.model);
	printf("Price : %d\n",c.price);
	printf("Engine No : %d\n",c.eng.engine_no);
	printf("Engine Capacity : %d\n",c.eng.engine_capacity);
	return 0;
}

