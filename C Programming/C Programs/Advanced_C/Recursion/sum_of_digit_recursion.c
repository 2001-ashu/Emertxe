#include <stdio.h>
int sum(int n)
{
    int r, rev = 0;
    if (n != 0)
    {
        r = n % 10;
        rev = r + sum(n / 10);
    }
    return rev;
}
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int s = sum(n);
    printf("Sum of digit in no %d is:%d", n, s);
}