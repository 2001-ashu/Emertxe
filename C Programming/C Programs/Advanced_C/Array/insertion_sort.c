#include <stdio.h>
void insertion_sort(int *arr, int size)
{
    int i, j, key;
    for (i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while ((j >= 0) && (arr[j] > key))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void selection_sort(int *arr, int size)
{
      int i,j,temp,min;
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
            
        }
            temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
    }
}
void Bubble_sort(int *arr, int size)
{
    int t;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }
    int ch;

    while (1)
    {
        printf("CHOOSE SORT METHOD:\n1.INSERTION SORT\n2.SELECTION SORT\n3.BUBBLE SORT\n4.DISPLAY\n5.EXIT\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            insertion_sort(arr, size);
            break;
        case 2:
            selection_sort(arr, size);
            break;
        case 3:
            Bubble_sort(arr, size);
            break;
        case 4:
            printf("Sorted Elements are:\n");
            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 5:
            return 0;
        }
    }
}