#include<stdio.h>
int main()
{
    int a=10,b=20;
    printf("Before Swap Nos are %d %d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter Swap Nos are %d %d\n",a,b);

}