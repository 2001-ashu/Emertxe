/*
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:

*/

#include <stdio.h>
int main()
{
    int i;
    int prime = 0;
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 2; i < n; i++)
        {
            if ((n % i) == 0)
            {
                prime++;
                break;
            }
        }
        if (prime == 0)
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    else
    {
        printf("Invalid input\n");
    }
    return 0;
}
