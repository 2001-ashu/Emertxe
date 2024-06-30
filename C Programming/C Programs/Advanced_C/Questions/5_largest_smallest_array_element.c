#include<stdio.h>
int main()
{
     int s;
     printf("Enter a Nos:");
     scanf("%d",&s);
     int arr[s];
    
     for (int i = 0; i < s; i++)
     {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
     }
  int largest=arr[0];
    int smallest=arr[0];
     for (int i = 0; i < s; i++)
     {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
         if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
     }
     printf("\nLargest Element in the array:%d ",largest);
     printf("\nSmallest Element in the array:%d",smallest);
     
}