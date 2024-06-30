/*
Name:Ashutosh Uday Zende
Date:11/12/2023
Description:A16 - WAP to replace 'n' bits of a given number
sample i/p:Enter num, n and val:10 3 12
sample o/p:Result = 12
*/
#include <stdio.h>

int replace_nbits(int, int, int);                                               // Function defination
int replace_nbits(int num, int n, int val)                                      // Function declaration
{
    num = num & (~((1 << n) - 1));                                              //expression to get num value 
    val = val & ((1 << n) - 1);                                                 //expression to get val value 
    num = num | val;                                                            //or operation in num and val value
    return num;                                                                 // return num value
}

int main()
{
    int num, n, val, res = 0;                                                   // variable initialisation and declaration
    printf("Enter num, n and val:");                                            // user prompt
    scanf("%d%d%d", &num, &n, &val);                                            // User input

    res = replace_nbits(num, n, val);                                           // Fuction call

    printf("Result = %d\n", res);                                               // print result
}