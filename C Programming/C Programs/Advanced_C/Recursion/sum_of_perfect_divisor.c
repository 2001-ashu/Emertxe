#include <stdio.h>
int sum(int num, int i)
{
    static int s = 0;
    if (i < num)
    {
        if (num % i == 0)
            s = s + i;
        sum(num, ++i);
    }
    return s;
}
int main()
{
    int num;

    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d", sum(num, 1));
}
