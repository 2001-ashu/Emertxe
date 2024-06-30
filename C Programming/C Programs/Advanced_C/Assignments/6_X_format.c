/*
Name:Ashutosh Uday Zende
Date:27/11/2023
Description:WAP to print the numbers in X format as shown below
sample i/p:Enter the number:4
sample o/p:1  4
            23
            23
           1  4
*/
#include<stdio.h>
int main()
{
    int i,j,num;                                    // variable initialise
    printf("Enter the number: ");                   // User prompt
    scanf("%d",&num);                               // User Input
    for(i=1;i<=num;i++)                             // for loop running upto i greater than equal to num
    {
        for(j=1;j<=num;j++)                         // for loop running upto j greater than equal to num
        {
            if(i==j)                                // check condition i is equals to j  
            {
                printf("%d",i);                     //print i
            }
            else if((i+j)==num+1)                   // check condtion i+j equals to num+1
            {
               printf("%d",j);                      // print j
            }
            else 
            {
                printf(" ");                        // print space
            }
           
        }
         printf("\n");                              // Go to next line
       
    } return 0;
}