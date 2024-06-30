#include<stdio.h>
int main()
{
     int num,r,even=0,odd=0;
     int ceven=0,codd=0;
     printf("Enter the number:");
     scanf("%d",&num);
     while(num!=0)
     {
        r=num%10;
        if(r%2==0)
        {
            ceven++;
            even=even+r;
            
        }
        else{
            codd++;
            odd=odd+r;

        }
        num=num/10;
     }
       printf("sum and count even of given number:%d %d\n",even,ceven);
        printf("sum and count of odd given number:%d %d\n",odd,codd);
}