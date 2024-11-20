// Online C compiler to run C program online binary tree using array
#include <stdio.h>
#include<stdlib.h>
 #define MAX_SIZE 100
 int tree [MAX_SIZE];
 void initTree(){
   int i;
   for (i=0;i<MAX_SIZE ;i ++)
   {
  tree[i] =-1;
  }
 } 
void insert (int  value)
{
 int index=0;
  while(tree[index]!=-1)
  {
 if (value<tree [index])
 {
     index=2*index +1;
    } 
  else 
  {
   index =2*index +2 ;
   }
  }
   tree [index]=value ;
  }
   void inorder (int index) 
   {
   if (tree [index]!=-1)
   {
 inorder (2*index +1);
  printf (" %d ", tree[index]);
  inorder(2*index+2);
   }
  }
  int main  ()
  {
  initTree ();
  insert(5);
  insert(3);
  insert(8);
  insert(1);
  insert(4);
  insert(7);
  insert(9);
  printf ("inorder Traversal;");
   inorder (0);
    printf("\n");
    return 0;
  }
  
  
  
