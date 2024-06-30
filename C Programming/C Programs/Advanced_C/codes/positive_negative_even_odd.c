/*
Name:Ashutosh Uday Zende
Date:23/11/23
DESCRIPTION:A1 - WAP to check if number is odd or even
SAMPLE I/P:Enter the value of 'n' : -2
SAMPLE O/P:-2 is negative even number

*/

#include<stdio.h>
int main()
{
   int n;                             // intialise variable
   printf("Enter the value of 'n':"); // Ask user to input
   scanf("%d",&n);                    // user input
   if(n>0)                            // Condition for n
{
   if((n%2)==0)                       // condition for n%2 equals to 0 
   {
   printf("%d is a positive  even number\n",n); //then print the no is positive even
   }
   else
   {
   printf("%d is a positive odd number\n",n);    // otherwise it is showing positive odd 
   }

   
}
   else if(n<0)                                // condition to check number is less than 0 
   {
    if((n%2)==0)                                 // condition for n%2 equals to 0 
    {
      printf("%d is a negative even number\n",n);   //then print the no is negative even

    }
  
    else
    {
    printf("%d is a negative odd number\n",n);        //otherwise print the no is negative odd

    }

   }
   else
   {
       printf("0 is neither odd nor even\n");         // when all conditions are false then print this prompt 
   }
    return 0;
}
 
     
     
            
            
           
   

