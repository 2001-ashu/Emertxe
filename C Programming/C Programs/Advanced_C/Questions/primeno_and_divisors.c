#include <stdio.h>
int main()
{
    int num, c = 0, prime = 0;
    int b;
    printf("Enter a nos:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int a = num % 2;
        if (a == 0)
        {
            prime = 1;
            printf("%d It is not prime Nos\n", num);

        }
            printf("Divisors are :%d", i);

    }
    if (prime == 0)
    {
        printf("%d It is prime Nos", num);
    }
    // else
    // {
    //     printf("%d It is not prime Nos\n", num);
    //     printf("Divisors are :%d", b);
    // }
}