//queue using ll
 #include<stdio.h>
 #include<stdlib.h>

   struct Node{
      int data ;
     struct Node*next;
    }*front =NULL, *rear=NULL;
    
  void insert (int);
  void delete();
  void display();
 
   int main (){
     int choice ,value;
     printf ("\n ::Queue implementation  using Linked list ::\n");
      while (1) {
      printf("\n ****MENU****\n");
      printf("1. insert \n 2. Delete \n 3. Display \n 4.Exit \n");
      printf( " Enter Your choice :");
       scanf("%d",& choice);
       switch (choice){
         case 1 : printf("Enter the value to be insert : ");
         scanf("%d", &value) ;   
         insert (value); 
                  break;
         case 2 : delete ();
                  break;
         case 3 : display();
                  break;
         case 4 : exit (0);
    default :printf("wrong selection please try again !!! \n"); 
      }
    };
      return 0;
    }
  void insert (int value)
   {
   struct Node *newnode;
   newnode=(struct Node*)malloc(sizeof (struct Node));
   newnode->data=value;
   newnode ->next=NULL;	
   if(front==NULL)
   (front =rear=newnode);
   else
   {
         rear->next =newnode;
         rear=newnode;
        }
        printf("\n insertion is success!!!\n");
       } 
     void delete()
       {
         if (front == NULL )
         
       printf("\nQueue is Empty !!!\n");
       else{ 
        struct Node * temp= front ;
         front =front ->next;
         printf("\n Deleted element:%d\n" , temp -> data);
         free (temp);
       }
      }
    void display ()
     {
     if (front ==NULL)
     printf ("\nQueue is Empty !!!\n");
     else{
     struct Node *temp = front ;
      while (temp->next!= NULL)
      {
      printf ("%d--->",temp ->data);
      temp =temp ->next;
       }
      printf ("%d--->NULL\n", temp -> data);
       }
      } 
       
