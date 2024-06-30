#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Nos:");
    scanf("%d%d%d", &a, &b, &c);
    if ((a > b) && (a > c))
    {
        printf("%d is the greatest no.", a);
    }
    else if ((b > a) && (b > c)) 
    {
        printf("%d is the greatest no.", b);
    }
    else
    {
        printf("%d is the greatest no.", c);
    }
}