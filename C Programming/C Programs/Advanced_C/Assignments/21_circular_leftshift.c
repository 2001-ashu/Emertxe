#include <stdio.h>
int print_bits(int);
int circular_left(int, int);
int circular_left(int num, int n)
{
    int a, b, mask;
    mask = ((num & (((1 << n) - 1) << 31 - n)) >> 31 - n) & ((1 << n) - 1) | num << n;
    
    return mask;
}
int print_bits(int ret)
{
    printf("Result in binary:");
    for (int i = 31; i >= 0; i--)
    {
        if (ret & (1 << i))
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
}

int main()
{
    int num, n, ret;

    printf("Enter the num:");
    scanf("%d", &num);

    printf("Enter n:");
    scanf("%d", &n);

    ret = circular_left(num, n);

    print_bits(ret);
}