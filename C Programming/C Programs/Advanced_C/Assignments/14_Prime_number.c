/*
Name:Ashutosh Uday Zende
Date:27/11/2023
Description:WAP to check whether a given number is prime or not
sample i/p;Enter a number:101
sample o/p:101 is a prime number
*/
#include <stdio.h>

int main()
{
    int num,prime=0;                                         // variable initialise
   // printf("Enter a number: ");
    scanf("%d",&num);                                       //user input
    if(num>0)                                               //check condition for num is greater than 0
    {
        for(int i=2;i<num;i++)                              //loop intialise until i less than num
        {
            if(num%i==0){                                   //condition check for num %i equals to 0
                prime=1;                                    // change prime variable value to 1
                
            }
        }
        if(prime==0){                                       // check condiion where prime equals to 0
            printf("%d is a prime number\n",num);           // prints is a prime number
        }
        else{
            printf("%d is not a prime number\n",num);       // otherwise it is not a prime number
        }
        
    }
    else{
        printf("Invalid input\n");                          // when num less than 0 then show this prompt
    }
    return 0;
    
    
}