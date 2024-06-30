/*
Name:Ashutosh Uday Zende
Date:07/12/2023
DESCRIPTION:A24 -A25 - WAP to implement your own ispunct() function
SAMPLE I/P:Enter a number:Enter the character: a
SAMPLE O/P: Entered character is not punctuation character
*/
#include <stdio.h>

int my_ispunct(int);                                                            // function defination
int my_ispunct(int ch)                                                          // function declaration
{
{
    if((ch>=33) && (ch<=47) || (ch>=58) && (ch<=64) || (ch>=91) && (ch<=96) || (ch>=123) && (ch<=126))      // check condition
    {
        return 0;                                                                       // return 0
    }
    return 1;                                                                   // return 1
}
}
int main()
{
    char ch;                                                                    // variable declaration
    int ret;                                                                    // variable declaration
    
    printf("Enter the character:");                                             // user prompt
    scanf("%c", &ch);                                                           // user input
    
    ret = my_ispunct(ch);                                                       // function call
     if (ret == 0)                                                              // check condition ret equals to 0
    {
        printf("Entered character is punctuation character");                   //puctuation character
    }
    else
    {
        printf("Entered character is not punctuation character");               // not punctuation character
    }
}