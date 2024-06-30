/*
Name:Ashutosh Uday Zende
Date:28/12/2023
DESCRIPTION:A34 - WAP to check whether a given number is prime or not using function.
SAMPLE I/P:Enter a number: 2
SAMPLE O/P: 2 is a prime number
*/
#include <stdio.h>

int is_prime(int);                                                              // function define
int is_prime(int n)                                                             //function declaration
{
  //  int p = 0;                                                                  //variable declaration
    for (int i = 2; i < n; i++)                                                 //loop run until i less than n
    {
        if (n % i == 0)                                                         //check condition
        {
            return 1;                                                       //return p equals to 1
        }
    }
}

int main()
{
    int num, res;                                                               // variable initialisation
  //  printf("Enter a number: ");                                                 // user prompt
    scanf("%d", &num);                                                          // user input
    res = is_prime(num);                                                        // call function
    if(num>0)
  {  if (res == 1)                                                               // res equals to 1
    {
        printf("%d is not a prime number", num);                                // print it is not prime number
    }
    else
    {
        printf("%d is a prime number", num);                                    // print its prime no
    }
    
  }
  else{
      printf("Invalid input");
  }
}