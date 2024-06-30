#include <stdio.h>
int is_prime(int *num)
{

     for (int i = 2; i < *num; i++)
     {
          if (*num % i == 0)
          {
               return 1;
          }
          return 0;
     }
}

int main()
{
     int num;
     printf("Enter the value of N : ");
     scanf("%d", &num);
     if (num < 0)
     {
          printf("Invalid input\n");
          return 0;
     }
     int res = is_prime(&num);
     if (res == 0)
     {
          printf("%d is a prime number", num);
     }
     else
     {
          printf("%d is not a prime number", num);
     }
}
