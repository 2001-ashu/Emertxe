#include<stdio.h>
int main()
{
    int n;
    printf("No.");
    scanf("%d",&n);
    printf("Decimal to Binary..\n");
    for(int i=31;i>=0;i--)
    {
        if(n &(1<<i))
        {
            printf("1 ");
        }
        else{
            printf("0 ");
        }
    }
}