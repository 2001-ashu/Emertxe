#include <stdio.h>
int main()
{
    int size, sqrt = 0;
    printf("Enter size:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Square the Array elements:");
    // for (int i = 0; i < size; i++)
    // {
    //     printf("%d ", arr[i] * arr[i]);
    // }
     for (int i = 0; i < size; i++)
    {
        arr[i]=arr[i] * arr[i];
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}