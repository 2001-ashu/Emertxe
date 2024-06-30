#include <stdio.h>
int sort(int *arr, int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[i])
            {
                arr[j] = arr[j] ^ arr[j + 1];
                arr[j + 1] = arr[j] ^ arr[j + 1];
                arr[j] = arr[j] ^ arr[j + 1];
            }
        }
    }
    
    printf("Ascending Order Of array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]:%d \n", i, arr[i]);
    }
}
int main()
{
    int size;
    printf("Enter size :");
    scanf("%d", &size);
    int arr[size];
    sort(arr, size);
}