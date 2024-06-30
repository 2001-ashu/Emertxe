#include <stdio.h>

int main()
{
    static int num;
    static unsigned long long int fact = 1;
    if (fact == 1)
    {
        printf("Enter the value of N : ");
        scanf("%d", &num);
    }

    if (num < 0)
    {
        printf("Invalid input");
        return 0;
    }
    if (num == 0)
    {
        printf("Factorial of the given number is 1");
        return 0;
    }
    if (num > 1)
    {
        fact = fact * (num--);
        main();
    }
    else
    {
        printf("Factorial of the given number is %lld\n", fact);
    }
}