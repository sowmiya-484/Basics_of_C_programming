#include<stdio.h>
union module{
	int i;
	float f;
	char c;
};
int main()
{
	int n,i;
	printf("enter n :\n");
	scanf("%d",&n);
	union module u;
	for(i=0;i<n;i++)
	{
		int op;
		printf("enter op 1-Int/2-float/3-char:\n");
		scanf("%d",&op);
		switch(op)
		{
			case(1):
				printf("enter integer I :\n");
				scanf("%d",&u.i);
				printf("integer:%d\n",u.i);
				break;
			case(2):
				printf("enter float F:\n");
				scanf("%f",&u.f);
				printf("float:%.2f\n",u.f);
				break;
			case(3):
				printf("enter character c:");
				scanf(" %c",&u.c);
				printf("character:%c",u.c);
				printf("\n");
				break;
			default:
				return 0;
		}
	}
	return 0;
}
