#include <stdio.h>
#define DATA_NOT_FOUND -1
int binary_search(int *arr, int size, int key)
{
    int first = 0;
    int last = size - 1;
    while (first <= last)
    {
        int mid = (first + last) / 2; // integer division so that it rounds down to the nearest integer

        if (key == arr[mid])
        { // element found at middle index
            return mid;
        }
        else if (arr[mid] > key)
        {
            last = mid - 1;
        }
        else
        {
            first = mid + 1;
        }
    }
    return  -1; // element not found in array
}

int main()
{
    int size;
    printf("Enter size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("Elements Should be in sorted order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d] :", i);
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter a number:");
    scanf("%d", &key);
    int value=binary_search(arr, size, key);
    printf("Position of element: %d\n",value);
    return 0;
}
