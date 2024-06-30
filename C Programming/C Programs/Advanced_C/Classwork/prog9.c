/*
Name:Ashutosh Uday Zende
Date:24/11/2023
Description:WAP to print the power of N series using loops
i/p: Enter the base value : 2
    Enter the exponetial value : 5
o/p:1 2 4 8 16 32
*/
#include <stdio.h>
int main()
{
   int power = 1, base, expo;
   printf("Enter the base value : ");
   scanf("%d", &base);
   printf("Enter the exponetial value : ");
   scanf("%d", &expo);
   for (int i = 0; i <= expo; i++)
   {
      printf("%d ", power);
      power = power * base;
   }
   printf("\n");

   return 0;

}