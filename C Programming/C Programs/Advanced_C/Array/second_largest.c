#include <stdio.h>
int main()
{
    int size, largest, s_largest;
    printf("Enter Array size:");
    scanf("%d", &size);
    int arr[size];
    printf("Elements in Array are: \n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    s_largest = arr[1];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            s_largest = largest;
            largest = arr[i];
        }
        else
        {
            if (arr[i] > s_largest && arr[i] < largest)
            {
                s_largest = arr[i];
            }
        }
    }
    printf("The Largest Element in Array is: %d\n",largest);
    printf("The Second Largest Element in Array is: %d",s_largest);
}