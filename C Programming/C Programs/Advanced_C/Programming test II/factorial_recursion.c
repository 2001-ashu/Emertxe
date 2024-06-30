#include<stdio.h>
int fact(int limit)
{
    if(limit>0)
    {
        return limit*fact(limit-1);
    }
    else{
        return 1;
    }
}
int main()
{
     int limit;
     printf("Enter limit:");
     scanf("%d",&limit);
     printf("Factorial of a Given Number is:%d",fact(limit));
}