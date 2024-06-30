#include <stdio.h>

int replace_nbits_from_pos(int, int, int, int);

int main()
{
    int num, a, b, val, res = 0;

    printf("Enter num, a, b, and val:");
    scanf("%d%d%d%d", &num, &a, &b, &val);

    res = replace_nbits_from_pos(num, a, b, val);

    printf("Result = %d\n", res);
}

int replace_nbits_from_pos(int num, int a, int b, int val)
{
    if (a <= 31 && b <= 31)
    {
        int cal = b - a + 1;
        int i, j;
        for (i = b, j = cal - 1; j >= 0; i--, j--)
        {
            if (num & (1 << j))
            {
                val = val | (1 << i);
            }
            else
                val = val & (~(1 << i));
        }
        return val;
    }
}