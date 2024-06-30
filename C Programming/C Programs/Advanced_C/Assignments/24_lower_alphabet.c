/*
Name:Ashutosh Uday Zende
Date:07/12/2023
DESCRIPTION:A24 - WAP to implement your own islower() function
SAMPLE I/P:Enter a number:Enter the character: a
SAMPLE O/P:Entered character is not lower case alphabet
*/
#include <stdio.h>

int my_islower(int);                                                            // Fuction defination
int my_islower(int ch)                                                          // Function declaration
{

    if (ch >= 'a' && ch <= 'z')                                                 // check condition
    {
        return 1;                                                               //return 1
    }
    return 0;                                                                   //return 0
}
int main()
{
    char ch;                                                                    // variable declaration
    int ret;                                                                    // variable declaration

    printf("Enter the character:");                                             // User prompt
    scanf("%c", &ch);                                                           // User Input

    ret = my_islower(ch);                                                       // Function Call
    if (ret == 1)                                                               // check condition ret equals to 1 
    {
        printf("Entered character is lower case alphabet");                     // Lower case alphabet
    }
    else
    {
        printf("Entered character is not lower case alphabet");                 // not lower case alphabet
    }
}