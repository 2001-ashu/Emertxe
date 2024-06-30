/*
Name:Ashutosh Uday Zende
Date:22/12/2023
Description:WAP to print rhombus using for loops
Sample i/p:Enter n value : 2
Sample o/p:  *
           * * *
             *
*/
#include<stdio.h>
int main()
{
    int i,j,k,num;                                                              //variable initialization   
    printf("Enter n value : ");                                                 //User prompt
    scanf("%d",&num);                                                           //User input
    for(i=1;i<=num;i++)                                                          //loop run until i less than num 
    {
        for(j=1;j<=num-i;j++)                                                    //loop run until j less than num
        {
            printf(" ");                                                        //print space
        }
        for(k=1;k<=2*i-1;k++)                                                    //loop run  until k less than 2*i-1
        {
            printf("*");                                                        //print *
        }
        printf("\n");                                                           //Go to next line
        
    }
     for(i=num-1;i>=1;i--)                                                          //loop run until i less than num 
    {
        for(j=num-1;j>=i;j--)                                                    //loop run until j less than num
        {
            printf(" ");                                                        //print space
        }
        for(k=1;k<=2*i-1;k++)                                                    //loop run  until k less than 2*i-1
        {
            printf("*");                                                        //print *
        }
        printf("\n");                                                           //Go to next line
        
    }
}