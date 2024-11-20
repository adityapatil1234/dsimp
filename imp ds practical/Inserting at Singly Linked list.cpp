//inserting at begining and end
#include<stdio.h>
#include<stdlib.h>
struct Node 
{int data;
struct Node *next;
};
struct Node *createNode(int data) 
{
 struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
if(newNode!=NULL)
{
newNode->data=data;
newNode->next=NULL;
}
return newNode;
}
void insertAtBeginning(struct Node ** head,int data)
{
struct Node *newNode = createNode(data);
if(newNode==NULL)
{
printf("Memory allocation failed, \n");
return;
}
newNode->next = *head;
*head =newNode;
}
void insertAtEnd(struct Node **head,int data)
{
struct Node *newNode=createNode(data);
if (newNode==NULL)
{
printf("Memory allocation failed\n");
return;
}
if(*head == NULL)
{
*head = newNode;
}
else
{
struct Node *current = *head;
while(current->next!=NULL)
{
current = current->next;
}
current->next=newNode;
}
}
void printList (struct Node *head)
{
struct Node  *current = head;
while(current!=NULL)
{
printf("%d\t",current->data);
current=current->next;
}
printf("\n");
}
int main()
{
struct Node *head = NULL;
insertAtBeginning(&head,3);
insertAtBeginning(&head,2);
insertAtBeginning(&head,1);
printf("Linked List after inserting at the beginning:\n");
printList(head);
insertAtEnd(&head,4);
insertAtEnd(&head,5);
printf("Linked List after inserting at the end:\n");
printList(head);
while(head!=NULL){
struct Node *temp=head;
head = head->next;
free(temp);
}
return 0;
}
