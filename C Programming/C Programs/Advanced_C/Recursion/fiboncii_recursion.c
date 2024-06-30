#include <stdio.h>

void positive_fibonacci(int, int, int, int);


int main()
{
    int limit;
    
    printf("Enter the limit : ");
    scanf("%d", &limit);
    
    positive_fibonacci(limit, 0, 1, 0);
}
void positive_fibonacci(int limit, int a, int b, int c)
{
    if(limit>=0)
    {
        if(limit>=c)
        {
            printf("%d, ",c);
            a=b;
            b=c;
            c=a+b;
            positive_fibonacci(limit,a,b,c);
        }
    }
    else{
        printf("Invalid input");
    }
}