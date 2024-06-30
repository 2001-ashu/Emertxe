#include<stdio.h>
int main()
{
     int fact=1;
     int num;
     printf("Enter num:");
     scanf("%d",&num);
     for(int i=1;i<=num;i++)
     {
        fact=fact*i;
     }
     printf("Factorial of a given number is %d",fact);
}