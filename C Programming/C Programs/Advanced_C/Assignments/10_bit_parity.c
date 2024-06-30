#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=0;i<=31;i++)
    {
        if( n &(1<<i))
        {
            count++;
        }
    }
    printf("Number of set bits = %d\n",count);
    if((count & 1)==0)
    {
        printf("Bit parity is Even\n");
    }
    else{
        printf("Bit parity is Odd\n");
    }
}