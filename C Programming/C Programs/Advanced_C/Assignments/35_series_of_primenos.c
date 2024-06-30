#include <stdio.h>

int is_prime(int);                           // Function Declaration

void generate_prime(int);                   // Function Declaration

int main()
{
    int limit;

    printf("Enter the limit: ");             // Read the number from user
    scanf("%d", &limit);

    if (limit > 1)
    {
        is_prime(limit);                     // Function calling
    }
    else
    {
        printf("Invalid input\n");
    }

    return 0;
}
int is_prime(int limit)
{
    int num, i, j, count = 0;
    for (i = 2; i <= limit; i++)                   // outer Loop run num times
    {
        count=0;
        for (j = 1; j <= i; j++)                   // inner loop run particular num times
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
            generate_prime(i);                    // Function Calling
    }
}

void generate_prime(int i)
{
    printf("%d ", i);
}