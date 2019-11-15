#include<stdio.h>
int que[100],size=100,front=-1;
int rear=-1;
void enq(int data)
{
	if(rear==size-1)
		{
		printf("OVERFLOW");
		}

	else
		{
		if(rear==-1)
			{
			front=0;
			}
		que[++rear]=data;
		}
};
int deq()
{
	int d;
	if(front==-1)
		{
		printf("UNDERFLOW\n");
		}
	else
		{
		d=que[front];
		if(front==rear)
			{
			front=-1;
			rear=-1;
			}
		else
			{
			front++;
			}
		return d;
		}
};
void main()
{
	int choice,data,a;
	while(1)
	{
	printf("-------1.Equeue\n-------2.Dequeue\nEnter the choice:");
	scanf("%d",&choice);


	switch(choice)
	{
		case 1:
		{
			printf("Enter The Data:");
			scanf("%d",&data);
			enq(data);
			break;
		}
		case 2:
		{
			a=deq();
			printf("Deleted element:%d\n",a);
			break;
		}
	}
}
}
