#include<stdio.h>
int main()
{
    int s;
    printf("Enter size:");
    scanf("%d",&s);
    int arr[s];
    int even = 0, odd = 0;
    for (int i = 0; i < s; i++)
    {
        printf("arr[%d]:", i);
        scanf("%d",&arr[i]);
    }
    printf("\nArray Elements are:");
    for (int i = 0; i < s; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < s; i++)
    {

        if ((arr[i] % 2 == 0))
        {
            even = even + arr[i];
        }
        else
        {
            odd = odd + arr[i];
        }
    }
    printf("\nSum of Even Nos:%d", even);
    printf("\nSum of odd Nos:%d", odd);
}