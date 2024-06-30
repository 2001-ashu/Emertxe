#include <stdio.h>
#define add(a, b) a + b
#define sub(a, b) a - b
#define mul(a, b) a * b
#define div(a, b) a / b

int main()
{
    int a,b;
    printf("Enter Two Nos:");
    scanf("%d",&a,&b);
    printf("Addition of Two nos:%d\n", add(a, b));
    printf("Substraction of Two nos:%d\n", sub(a, b));

    printf("Multiplication of Two nos:%d\n", mul(a, b));

    printf("Division of Two nos:%d\n", div(a, b));
}