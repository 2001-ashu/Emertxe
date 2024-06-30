#include<stdio.h>
#include<stdlib.h>
int ascend(const void *arr,const void *b)
{
    return *(float *)arr> *(float *)b;
}
int decend(const void *arr,const void *b)
{
    return *(float *)arr< *(float *)b;
}
int main()
{
     float arr[5]={2.5,1.4,10.1,0.2,3.5};
     qsort(arr,5,sizeof(float),ascend);
     printf("\nAscending:");
     for (int i = 0; i < 5; i++)
     {
        printf("%g ",arr[i]);
     }
      qsort(arr,5,sizeof(float),decend);
     printf("\nDescending:");
     for (int i = 0; i < 5; i++)
     {
        printf("%g ",arr[i]);
     }
     

}