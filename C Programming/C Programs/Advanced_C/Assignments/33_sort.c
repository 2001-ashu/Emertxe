#include <stdio.h>

// void print_sort(int [], int);
int print_sort(int *arr, int size)
{
    int largest = arr[0];
    int smallest = arr[0];
    int s_smallest;
    for (int i = 0; i < size; i++)
    {

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("After Sorting: %d ", smallest);
    for (int i = 0; i < size - 1; i++)
    {
        s_smallest = largest;
        for (int j = 0; j < size; j++)

        {
            if (smallest < arr[j] && arr[j] < s_smallest)
            {
                s_smallest = arr[j];
            }
        }
        smallest = s_smallest;
        printf("%d ", s_smallest);
    }
}

int main()
{
    int size, iter;

    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the %d elements\n", size);
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }

    print_sort(arr, size);
    printf("\nOriginal array values ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
