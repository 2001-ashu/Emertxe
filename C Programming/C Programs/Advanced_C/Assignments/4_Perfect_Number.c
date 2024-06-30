/*
Name:Ashutosh Uday Zende
Date:24/11/2023
DESCRIPTION:A4 - WAP to check if number is perfect or not
SAMPLE I/P:Enter a number: 6
SAMPLE O/P:Yes, entered number is perfect number
*/

#include<stdio.h>
int main()
{
   int n, sum=0;						// Variable Declaration and assign value for sum
   printf("Enter a Number:");					//Ask for value to the user
   scanf("%d",&n);			 			// User Input
   if(n>0){			  				//check condition where n greater than 0
   for(int i=1;i<n-1;i++)					// loop intialise with condition i is less than (n-1)
   {
   if((n%i)==0)						// check condition n%i is equals to 0
{						
       sum=sum+i;						// store value in sum for sum+i
   
      }

   }
   if(sum==n)				   		// check condition sum equals to n 
   {
   printf("Yes, entered number is perfect number\n");		// it prints is is perfect Number
   }
   else
   {
   printf("No, entered number is perfect not a number\n");		// othewise it not a perfect Number
   }
   }
   else{
   printf("Error : Invalid Input, Enter only positive number\n");	// user give num value is less than 0 then prints this prompt
   }
    return 0;
}

