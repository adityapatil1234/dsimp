#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void enQueue(int);
void deQueue();
void display();
int queue[SIZE],front=-1,rear=-1;
int main()
{
	int value,choice;
	while(1)
	{
		printf("\n\n\n\n*****Menu*****\n");
		printf("1.insertion\n2.deletion\n3.display\n4.exit");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value to be insert");
				scanf("%d",&value);
				enQueue(value);
				break;
				case 2:deQueue();
				break;
				case 3:display();
				break;
				case 4:exit(0);
				default:
					printf("\n wrong selection");
					
		}
	}
}
void enQueue(int value)
{
	if(rear==SIZE-1)
	printf("Queue is full");
	else{
	if(front==-1)
	front=0;
	rear++;
	queue[rear]=value;
	printf("\n insertion successfully");
}
}
void deQueue()
{
	if (front==rear)
	printf("inQueue is empty");
	else
	{
		printf("\n deleted:%d",queue[front]);
		front++;
		if(front==rear)
		front=rear=-1;
	}
}
void display()
{
	if (rear==-1)
	
		printf("\n queue is empty");
		else
		{
			int i;
			printf("\n queue element are:");
			for (i=front;i<=rear;i++)
			printf("%d't",queue[i]);
		}
}

