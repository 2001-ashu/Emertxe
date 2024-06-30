#include <stdio.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d", &arr[i]);
    }
    printf("Your Array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
              
                  if (arr[j+1]  == 0 )
                {
                    int temp=arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1]=temp;
                }
            }
        }
    printf("\nUpdated Array is:");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}