#include <stdio.h>
int reverse(int *arr, int size, int i)
{
    if (size/2 > i)
    {
        
            int temp = arr[i];
            arr[i] = arr[size-i-1];
            arr[size-i-1] = temp;
            reverse(arr, size, ++i);

        
    }
}
int main()
{
    int size;
    printf("Enter array size:");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    reverse(arr, size, 0);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}