/*
Name:Ashutosh Uday Zende
Date:13/12/2023
Description:WAP a function to calculate squuare a number
Sample i/p:Enter the number : 2
Sample o/p:Square is 4
*/
#include<stdio.h>
int square(int *num)                                                             // function declaration
{
    return *num * *num;                                                           // Return num * num
}
int main()
{
int num;                                                                        // variable initialise
printf("Enter the number : ");                                                  //user prompt
scanf("%d",&num);                                                               // User input
int res=square(&num);                                                            // Funtion call
printf("Square is %d",res);                                                     // Print square
}
