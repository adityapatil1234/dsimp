//program for deletion at beging and end inside singly linked list
#include <stdio.h>
#include <stdlib.h>
struct Node {
     int data;
     struct Node *next;
 };
struct Node *createNode(int data)
{
struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
     if (newNode!=NULL)
    {
     newNode-> data=data;
     newNode-> next=NULL;
    }
    return newNode;
  }
void insertEnd (struct Node **head,int data)
{
   struct Node *newNode =createNode(data);
   if (newNode ==NULL)
    {
   printf ("Memory allocation failed,\n");
      return;
   }
        if(*head==NULL)
  {
   *head=newNode;
   }
  else
  {
  struct Node *current =*head;
  while(current->next!=NULL)
  {
  current=current->next;
  }
  current->next=newNode;
  }
}
void deleteFromBeginning (struct Node **head)
  {
     if(*head==NULL)
   {
   printf("List is empty!!");
   return;
   }
   struct Node *temp=*head;
   *head=(*head)->next;
   free (temp);
  }
void deleteFromEnd (struct Node **head)
  {
     if(*head==NULL)
    {
     printf ("List is empty!!");
     return;
    }
    if ((*head)->next==NULL)
    {
    free(*head);
    *head=NULL;
    return;
    }
   struct Node *current = *head;
    struct Node *prev=NULL;
    while (current->next!=NULL)
    {
    prev=current;
    current=current->next;
    }
    free (current);
    prev->next=NULL;
 }
 void printList (struct Node *head)
 {
 struct Node *current=head;
 while(current!=NULL)
   {
    printf ("%d\t",current->data);
    current=current->next;
   }
   printf("\n");
  }
   int main()
   {
   struct Node *head=NULL;
insertEnd (&head,1);
insertEnd (&head,2);
insertEnd (&head,3);
insertEnd (&head,4);
  printf("Original Linked List:\n");
  printList(head);
  deleteFromBeginning(&head);
  printf("Linked List after Deleting from the Beginning :\n");
  printList (head);
  deleteFromEnd (&head);
  printf ("Linked List after Deleting from the End :\n");
  printList(head);
  while(head!=NULL){
  struct Node *temp=head;
  head=head->next;
  free(temp);
  }
  return 0;
 }

