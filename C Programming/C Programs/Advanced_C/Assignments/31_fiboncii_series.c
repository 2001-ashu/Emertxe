/*
Name:Ashutosh Uday Zende
Date:27/12/2023
DESCRIPTION:A24 -A31 - WAP to generate fibbonacci numbers using recursion
SAMPLE I/P:Enter a number:Enter a number: 8
SAMPLE O/P:0, 1, 1, 2, 3, 5, 8
*/
#include <stdio.h>

void positive_fibonacci(int, int, int, int);                                    // function defination


int main()
{
    int limit;                                                                  // variable initialise
    
    printf("Enter the limit : ");                                               // user prompt
    scanf("%d", &limit);                                                        // user input
    
    positive_fibonacci(limit, 0, 1, 0);                                         // function call
}
void positive_fibonacci(int limit, int a, int b, int c)                         // function declaration
{
    if(limit>=0)                                                                // condition limit greter than equal to 0
    {
        if(limit>=c)                                                            // condition limit greter than equal to c
        {
            printf("%d, ",c);                                                   // print c value
            a=b;                                                                // a=b
            b=c;                                                                // b=c
            c=a+b;                                                              // calculate c
            positive_fibonacci(limit,a,b,c);                                    //call function
        }
    }
    else{
        printf("Invalid input");                                                // invalid
    }
}