#include<stdio.h>
typedef enum
{
	temperature,
	humidity,
	pressure
}sensorType;
typedef struct 
{
	int id;
	sensorType type;
	float reading;
}sensorNode;
void printSensorType (sensorType t)
{
	switch(t)
	{
		case temperature:
			printf("Temperature");
			break;
		case humidity:
			printf("Humidity");
			break;
		case pressure:
			printf("Pressure");
			break;
		default:
			printf("unknown");
	}
}
int findFaultyNode(sensorNode arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i].reading<0||arr[i].reading>150)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	sensorNode node[10];
	int n,i,index;
	printf("enter number of sensor : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("sensor %d\n",i+1);
		printf("enter Id: ");
		scanf("%d",&node[i].id);
		printf("enter type : ");
		scanf("%d",(int*)&node[i].type);
		printf("enter reading : ");
		scanf("%f",&node[i].reading);
	}
	for(i=0;i<n;i++)
	{
		printf("node %d : ",node[i].id);
		printSensorType(node[i].type);
		printf("\n");
	}
	index=findFaultyNode(node,n);
	if(index==-1)
	{
		printf("all nodes are normal\n");
	}
	else
	{
		printf("\nfaulty Node -> id %d reading %.2f\n",node[index].id,node[index].reading);
	}
	return 0;
}
