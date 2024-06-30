#include <stdio.h>
void insertion(int *arr, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
    int main()
    {
        int n;
        printf("Enter size");
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            printf("Arr[%d]:", i);
            scanf("%d", &arr[i]);
        }
        insertion(arr, n);
        printf("Sorted array Using Isertion Sort:\n");
        for (int k = 0; k < n; k++)
        {
            printf("%d ", arr[k]);
        }
    }