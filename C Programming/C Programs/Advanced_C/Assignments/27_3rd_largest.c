#include <stdio.h>

//int third_largest(int, int);

int third_largest(int *arr, int *size)

{
     int largest = arr[0];
        int s_largest = arr[1];
        int t_largest = arr[3];

    for (int i = 0; i < *size; i++)
    {
       

        if (arr[i] > largest)
        {
            t_largest = s_largest;
            s_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > s_largest && arr[i] < largest)
        {
            t_largest = s_largest;
            s_largest = arr[i];
        }
        else
        {
            if (arr[i] > t_largest && arr[i] < s_largest)
            {
                t_largest = arr[i];
            }
        }
    }
         return t_largest;
    
}

int main()
{
    int size, ret;

    // Read size from the user
    printf("Enter the size of the array :");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements into the array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Read elements into the array

    // funtion call
    ret = third_largest(arr, &size);

    printf("Third largest element of the array is %d\n", ret);
}
