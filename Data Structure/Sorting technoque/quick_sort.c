#include <stdio.h>
#include<stdlib.h>
int partition(int *arr, int first,int last)
{
    int i,j,temp,pivot=arr[last],p_i=first;
    for(i=first;i<last;i++)
    {
        if(arr[i]<pivot)
        {
            temp=arr[i];
            arr[i]=arr[p_i];
            arr[p_i]=temp;
            p_i++;
        }
    }
            temp=arr[i];
            arr[i]=arr[p_i];
            arr[p_i]=temp;
            return p_i;
}
void quick_sort(int *arr, int first, int last)
{
    if (first < last)
    {
        int p_i = partition(arr, first, last);
        quick_sort(arr, first, p_i - 1);
        quick_sort(arr, p_i + 1, last);
    }
}

int main()
{
    int size;
    printf("Enter size:");
    scanf("%d", &size);
    // creating a dynamic array using malloc in C
    int *arr = malloc(size);
    if (!arr)
    {
        printf("Memory not allocated\n");
        return 0;
    }
    for (int i = 0; i < size; i++)
    {
        printf("Arr[%d]", i);
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, size - 1);
    printf("\nSorted Array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr); // freeing the memory occupied by arr
    return 0;
}