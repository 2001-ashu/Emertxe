#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size:");
    scanf("%d", &size);
    int arr[size];
    printf("Array Elements are:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d",&arr[i]);
    }
    printf("Even No in array:\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\nOdd No in array:\n");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 1)
        {
            printf("%d ", arr[i]);
        }
    }
}