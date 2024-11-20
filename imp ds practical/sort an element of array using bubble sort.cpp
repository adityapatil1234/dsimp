// sort an element of array using bubble sort
#include<stdio.h>
void bubblesort(int arr[],int n )
{
 int temp;
 int swapped;
 int i,j;
 for(i=0;i<n-1;i++)
{
  swapped =0;
 for (j=0;j<n-1-i;j++)
 {
 	
 if(arr[j]>arr[j+1])
 {
  temp=arr[j];
  arr[j]=arr[j+1];
  arr[j+1]=temp;
  swapped=1;
 }
}
 if (swapped==0)
    {
       break ;
    }
   }
  }

  int main ()
{
    int n;
     printf("Enter the number of elements in the array:");
    scanf ("%d",&n);
    int arr[n];
    printf("Enter %d elements :\n ",n);
   int i;
  for (i=0;i<n;i++)
{
  scanf("%d", & arr [i] );
  }

 bubblesort(arr,n);
   printf("sorted array in ascending  order:");  
   for (i=0;i<n;i++)
 {
   printf("%d",arr[i]);
   }
    return 0;
  }   

