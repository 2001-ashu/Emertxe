#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int oper(int (*fptr)(int, int), int a, int b)
{
    return fptr(a, b);
}
int main()
{
    int (*fptr[])(int, int) = {add,sub};
    printf("Addition Of Two Nos:%d\n", (fptr[0], 2, 3));
    printf("Substraction of Two Nos:%d\n", (fptr[1], 5, 2));
    // printf("Multiplication  of Two Nos:%d\n", (fptr[2], 2, 2));
    // printf("Division of Two Nos:%d\n", (fptr[3], 6, 2));
}