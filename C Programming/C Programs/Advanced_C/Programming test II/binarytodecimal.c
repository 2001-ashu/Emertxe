#include <stdio.h>
#include <stdlib.h>
int binary(char *str);
int main()
{
    char str[] = "111";

    printf("%d\n", binary(str));
    return 0;
}
int binary(char *str)
{
    int size = 0, sum = 0, mul = 1, i, j = 0;
    
    while (str[size] != '\0')
    {
        size++;
    }
    size = size - 1;
    for (i = size; size >= 0; size--)
    {
        j = (str[size] - 48) * mul;

        mul = mul * 2;
        sum = sum + j;
    }
    return s;
}