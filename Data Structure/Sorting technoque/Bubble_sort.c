#include <stdio.h>
void ascend(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void desend(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int size;
    printf("Enter the number of elements you want in array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array Elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    int ch;
    printf("\nPress 1 to sort Array Ascendingly\nPress 2 to sort Array Descendingly\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        ascend(arr, size);

        printf("Ascending order of array is: \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    else
    {
        desend(arr, size);

        printf("Ascending order of array is: \n");
        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}