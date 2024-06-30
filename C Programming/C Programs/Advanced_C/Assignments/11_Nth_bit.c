#include <stdio.h>
int main()
{
    int num, n, m;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter 'N': ");
    scanf("%d", &n);
    printf("Enter 'M': ");
    scanf("%d", &m);

    if (num & (1 << n))
    {
        num = num & (~(1 << m));
        printf("Updated value of num is %d",num); 


    }
}