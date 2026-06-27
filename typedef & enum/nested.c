#include<stdio.h>
typedef struct {
	char city[20];
	char state[20];
	int pincode;
}address;
typedef struct{
	int id;
	char name[20];
	address ad;
}student;
int main()
{
	student s={20,"sowmiya",{"chennai","Tamil Nadu",600042}};
	printf("ID:%d\n",s.id);
	printf("Name:%s\n",s.name);
	printf("Address:\n");
	printf("city:%s\nstate:%s\npincode:%d\n",s.ad.city,s.ad.state,s.ad.pincode);
	return 0;
}

