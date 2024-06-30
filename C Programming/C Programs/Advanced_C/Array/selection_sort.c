#include <stdio.h>
void selection(int *arr, int size)
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
int main()
{
    int size;
    printf("Enter Size:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter Array Elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    selection(arr, size);

    printf("Updated Array:");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}