#include <stdio.h>
int fiboncii(int num, int a, int b, int c)
{
    if (num != 0)
    {
        printf("%d", c);

        fiboncii(num - 1, b, c, b + c);
    }
}

int main()
{
    int num;
    printf("Enter num:");
    scanf("%d ", &num);
    fiboncii(num, 0, 1, 0);
}