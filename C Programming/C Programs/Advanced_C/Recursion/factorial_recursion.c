#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    if (n != 0)
        fact = n * factorial(n - 1);
    return fact;
}
int main()
{
    int n, fact;
    printf("Enter the No:");
    scanf("%d", &n);
    fact = factorial(n);
    printf("Factorial of a Number %d is:%d", n, fact);
}