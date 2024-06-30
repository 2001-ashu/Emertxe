#include<stdio.h>
int main()
{
     int s;
     printf("Enter size:");
     scanf("%d",&s);
     int arr[s];
     for (int i = 0; i < s; i++)
     {
        printf("arr[%d]:",i);
        scanf("%d",&arr[i]);

     }
     int temp;
     for (int i = 0; i < s/2; i++)
     {
        temp=arr[i];
        arr[i]=arr[s-i-1];
        arr[s-i-1]=temp;
     }
     printf("After Array is Reversed...");
     for (int i = 0; i < s; i++)
     {
        printf("%d ",arr[i]);
     }
     
     
     

}