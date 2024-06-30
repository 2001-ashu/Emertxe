#include <stdio.h>
int sum(int *arr, int size, int i)
{
    int s=0;
    if (i < size)
    {
        s = arr[i] + sum(arr, size, ++i);

    }
    // else
    // {
    //     return 0;
    // }
    return s;
}
int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Your Array is:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSum of array Elements : %d", sum(arr, size, 0));
}