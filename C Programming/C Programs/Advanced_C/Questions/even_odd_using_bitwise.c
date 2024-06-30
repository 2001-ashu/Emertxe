#include<stdio.h>
int main()
{
     int num;
     printf("Enter number:");
     scanf("%d",&num);
     if(num & 1)
     {
        printf("Number is odd %d",num);

     }
     else{
                printf("Number is even %d",num);

     }
}