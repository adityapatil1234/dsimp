//stack impletation
#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int top=-1;
void push (int value)
{
	{
	if(top==MAX-1)
	printf("error:stack overflow");
	return;
}
stack[++top]=value;
}
int pop()
{
	if(top==-1)
	{
		printf("eroor:stack is underflow\n");
		return-1;
	}
	return stack[top--];
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("1.push\n2.pop\n3.exit\n");
		printf("enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter value to push:");
				scanf("%d",&value);
				push(value);
				break;
	        case 2:
	        	value=pop();
	        	if(value!=-1)
	        	{
	        		printf("poped value:");
	        		scanf("%d",value);
				}
				break;
				case 3:
					exit(0);
					default:
					printf("invalid choice\n");
		}
	}
	return 0;
}
