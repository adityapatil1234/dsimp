//deletion of element from begining &front  DLL
#include<stdio.h>
#include<stdlib.h>
struct Node {
     int data;
     struct Node *prev;
     struct Node *next;
    };
struct Node *createNode (int data) {
  struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
  if(newNode==NULL)
{
    printf("memory allocation failed\n");
    exit(1);
}
    newNode->data=data;
  newNode->prev=NULL;
  newNode->next=NULL;
  return newNode;
  }
void insertAtBegining (struct Node **head,
     int data)
{
     struct Node *newNode=createNode(data);
     newNode->next=*head;
     if(*head==NULL)
     {
     *head=newNode;
     }
     else
     {
         newNode->next=*head;
         (*head)->prev=newNode;
         *head=newNode;
     }
}
void insertAtEnd (struct Node **head,int data)
  {
  struct Node *newNode=createNode(data);
  if(*head==NULL){
  *head=newNode;
  }
  else
  {
  struct Node *current=*head;
  while (current->next!=NULL)
  {
  current=current->next;
  }
  current->next=newNode;
  newNode->prev=current;
  }
 }
void deletefromBeginning (struct Node**head)
 {
   if(*head==NULL)
   {
  printf("List is empty,cannot delete from beginning.\n");
  return;
   }
    struct Node *temp=*head;
    *head =(*head)->next;
    if (*head!=NULL)
    {
    (*head)->prev=NULL;
    }
    free(temp);
 }
void deleteFromEnd (struct Node **head)
  {
     if(*head==NULL)
    {
     printf ("List is empty, Cannot delete from end!n");
     return;
}
struct Node *current=*head;
  while (current->next!=NULL)
     {
    current=current->next;
     }
     if (current->prev!=NULL)
     {
         current->prev->next=NULL;
     }
     else
    {
    *head=NULL;
    }
    free(current);
}
void printList (struct Node *head)
    {
    struct Node *current=head;
    while(current!=NULL)
    {
    printf("%d->",current->data);
    current=current->next;
    }
    printf("NULL \n");
    }
    int main()
    {
    struct Node *head=NULL;
    insertAtBegining(&head,10);
    insertAtBegining(&head,20);
    insertAtBegining(&head,30);
  printf("Doubly linked list after inserting at the beginning:\n");
    printList(head);
    deletefromBeginning(&head);
printf("Doubly Linked list after deleting from the beginning;\n");
    printList(head);
    insertAtEnd(&head,40);
    insertAtEnd(&head,50);
printf("Doubly Linked list after inserting at the end:\n");
    printList(head);
    deleteFromEnd(&head);
printf("Doubly Linked list after deleting from the end:\n");
    printList (head);
    return 0 ;
    }

