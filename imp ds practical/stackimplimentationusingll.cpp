 //Stack  implementation using Linked  List
#include <stdio.h>
#include <stdlib.h>
struct Node 
{
   int data ;
   struct Node *next ;
}
*top=NULL;
  void push (int);
  void pop ();
  void display ();
int main () 
{
    int choice,value;
    printf ("\n::stack using Linked List::\n");
    while(1) 
{
    printf ("\n*****MENU*****\n");
    printf ("1.Push .\n 2. Pop \n 3. Display \n 4. Exit \n");
    printf ("Enter your choice :");
    scanf ("%d",&choice);
    switch (choice)
{
    case 1 : printf ("Enter the value to be insert:");
    scanf("%d",&value);
    push (value);
    break;
    case 2 : pop ();
             break ;
    case 3 : display();
             break ;
    case 4 : exit(0);
    default : printf("\n Wrong selection !!! Please Try Again !!!\n");
    }
    };
}
void push (int value)
{
    struct Node *newNode ;
    newNode=(struct Node*) malloc(sizeof (struct Node));
    newNode ->data =value ;
    if(top == NULL)
    newNode ->next=NULL;
    else
    newNode ->next = top ;
    top = newNode ;
    printf("\nIntersection is success !!!\n");
}
    void pop ()
{
    if (top ==NULL)
    printf ("\nstack is Empty !!!\n");
    else
   {
    struct Node *temp = top ;
    printf ("\nDeleted elment :%d",temp ->
    data);
    top=temp ->next;
    free (temp);
    }
}
void display ()
{
    if (top==NULL)
    printf("\nstack is Empty !!!\n");
    else {
    struct Node *temp=top;
    while(temp->next!=NULL)
    { 
        printf ("%d -->", temp->data); 
    temp=temp->next ;
    }
    printf ("%d -->NULL", temp->data);
    }
}
