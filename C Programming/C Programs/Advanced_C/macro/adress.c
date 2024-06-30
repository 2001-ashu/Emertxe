#include <stdio.h>
#define sum(x, y) *x + *y
int main()
{
    int a = 10;
    int b = 10;
    printf("Addition of Two nos:%d\n", sum(&a, &b));
}