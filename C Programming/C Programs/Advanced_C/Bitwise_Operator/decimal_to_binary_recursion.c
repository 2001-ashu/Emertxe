#include<stdio.h>
int pos=31;
void decimal_to_binary(int num)
{
   // static int pos=31;
    if(pos>=0)
    {
        if(1 & (num>>pos))
        {
            printf("1 ");
        }
        else{
            printf("0 ");
        }
        pos--;
        decimal_to_binary(num);
        
        
    }
}
int main()
{
     int num;
     printf("Enter Num:");
     scanf("%d",&num);
     decimal_to_binary(num);
}