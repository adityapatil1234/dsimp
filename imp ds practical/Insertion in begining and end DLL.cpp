//Insertion in begining and end DLL
#include<stdio.h>
#include<stdlib.h>
struct Node {
     int data;
     struct Node *prev;
     struct Node *next;
    };
struct Node *createNode (int data) {
  struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->prev=NULL;
  newNode->next=NULL;
  return newNode;
  }
void insertAtBegining (struct Node **head,
     int data){
     struct Node *newNode=createNode(data);
     newNode->next=*head;
     if(*head!=NULL){
     (*head)->prev=newNode;
     }
     *head=newNode;
     }
void insertAtEnd (struct Node **head,int data)
  {
  struct Node *newNode=createNode(data);
  if(*head==NULL){
  *head=newNode;
  return;
  }
  struct Node *current=*head;
  while (current->next!=NULL){
  current=current->next;
  }
  current->next=newNode;
  newNode->prev=current;
  }
void printList (struct Node *head){
   struct Node *current=head;
   while (current!=NULL){
   printf ("%d\t",current->data);
   current=current->next;
   }
   printf ("\n");
}
int main()
{
    struct Node *head=NULL;
    insertAtBegining(&head,3);
    insertAtBegining(&head,2);
    insertAtBegining(&head,1);
printf("Doubly linked list after inserting at the begining :\n");
   printList(head);
   insertAtEnd (&head,4);
   insertAtEnd (&head,5);
printf("Doubly linked list after inserting at the end :\n");
   printList(head);
   return 0;
 }

