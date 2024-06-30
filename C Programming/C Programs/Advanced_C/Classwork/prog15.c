#include<stdio.h>
int main()
{
    int n,c=0;
    printf("No.");
    scanf("%d",&n);
    printf("Decimal to Binary..\n");
    for(int i=31;i>=0;i--)
    {
        if(n &(1<<i))
        {
            printf("1 ");
            c++;
        }
        else{
            printf("0 ");
        }
    }
    printf("\nSet count :%d",c);
}