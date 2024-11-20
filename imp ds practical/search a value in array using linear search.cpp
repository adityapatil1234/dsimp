// search a value in array using linear search
#include<stdio.h>
int main ()
{
  int list[20],size,i,sElement;
  printf("Enter size of the list:");
  scanf("%d",&size);
  printf("Enter any %d integer values:",size);
  for (i=0;i<size;i++)
  scanf("%d",&list[i]);
  printf("Enter the element to be search:");
  scanf("%d",&sElement);
  for(i=0; i<size;i++)
  {
      if(sElement==list[i])
      {
      printf("Element is found at %d index",i);
      break;
     }
}
if (i==size)
  printf("Given element is not found in the list !!!!");
           getchar();
        return 0;
  }
  
 
