#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two nos: ");
    scanf("%d %d", &a, &b);
    switch (a>b?1:0)
    {
    case 1:
    {
        printf("%d is big", a);
        break;
    }
    case 0:
    {
        printf("%d is big", b);
    }
    }
}