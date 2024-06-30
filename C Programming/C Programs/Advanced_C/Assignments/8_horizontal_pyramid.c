/*
Name:Ashutosh Uday Zende
Date:27/11/2023
DESCRIPTION:A8 - WAP to print pyramid pattern as shown below
SAMPLE I/P:Enter the number: 4
SAMPLE O/P:4
           3 4
           2 3 4
           1 2 3 4
           2 3 4
           3 4
           4

*/

#include<stdio.h>
int main()
{
   int num,i,j;                             // variable initialise
   printf("Enter the number: ");            //user prompt
   scanf("%d",&num);                        //user input
   for(i=num;i>=1;i--)                      //loop running upto i is greater than equals to 1 
   {
     for(j=i;j<=num;j++)                    // loop running upto j is less than equals to num
     {
          printf("%d ",j);                  //print j value
     }
     printf("\n");                          //Go to next line
   }
   for(i=2;i<=num;i++)                       //loop running upto i is less than equals to num 
   {
     for(j=i;j<=num;j++)                     //loop running upto j is less than equals to num 
     {
        printf("%d ",j);                    //print j 
     }
     printf("\n");                          // go to next line
   }
    return 0;
}
 
     
     
            
            
           
   

