/*
Name:Ashutosh Uday Zende
Date:24/11/2023
DESCRIPTION:A2 - WAP to generate negative Fibonacci numbers
SAMPLE I/P:Enter a number: -8
SAMPLE O/P:0 1 -1 2 -3 5 -8

*/

#include<stdio.h>
int main()
{
  int n1=0,n2=1,n3=0, num;			// Variable declaration 
  printf("Enter a number: ");			// give prompt
  scanf("%d",&num);			// user input
  if(num<=0){				// check condition where num greater then equal to 0 
 while(num<=n3 && n3<=num*(-1))		// intialise loop and condition
  {
  printf("%d ",n3);				// print n3 value
    
   n1=n2;					//assign value for n1 to n2
   n2=n3;					//assign value for n2 to n3
   n3=n1-n2;                               			//assign the value of substaction to n1 and n2 in n3
                                  			
       
  }
  printf("\n");				// go to next line
  }
  else{
  printf("Invalid input\n");			//when condition fails then print this prompt
  }
    return 0;
}
 
     
     
            
            
           
   

