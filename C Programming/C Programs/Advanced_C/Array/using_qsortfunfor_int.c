#include<stdio.h>
#include<stdlib.h>
int ascend(const void *arr,const void *b)
{
    return *(int *)arr > *(int *)b;
}
int desend(const void *arr,const void *b)
{
    return *(int *)arr < *(int *)b;
}
int main()
{
     int arr[5]={12,9,4,33,22};
     qsort(arr,5,sizeof(int),ascend);
     printf("Ascending:");
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",arr[i]);
     }
      qsort(arr,5,sizeof(int),desend);
     printf("\nDscending:");
     for (int i = 0; i < 5; i++)
     {
        printf("%d ",arr[i]);
     }
     
}