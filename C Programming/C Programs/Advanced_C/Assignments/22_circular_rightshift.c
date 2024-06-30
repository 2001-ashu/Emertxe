#include <stdio.h>

int circular_right(unsigned int num,unsigned int n)
{
    return (num>>n)|(num<<(32-n));
}
int print_bits(unsigned int ret ){
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
    
    ret = circular_right(num, n);
    
    print_bits(ret);
}