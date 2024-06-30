#include <stdio.h>

void negative_fibonacci(int, int, int, int);

int main()
{
    int limit;

    printf("Enter the limit : ");
    scanf("%d", &limit);

    negative_fibonacci(limit, 0, 1, 0);
}
void negative_fibonacci(int limit, int a, int b, int c)
{
    if (limit <= 0) // condition limit greter than equal to 0
    {
        if (limit<=c && c<=limit*(-1)) // condition limit greter than equal to c
        {
            printf("%d, ", c);
            // print c value
            a = b; // a=b
            b = c;
            c = a - b;
            // b=c
            // calculate c
            negative_fibonacci(limit, a, b, c); // call function
        }
    }
    else
    {
        printf("Invalid input"); // invalid
    }
}
