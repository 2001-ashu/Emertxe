/*
Name:Ashutosh Uday Zende
Date:07/12/2023
DESCRIPTION:A23 - WAP to implement your own isalnum() function
SAMPLE I/P:Enter a number: Enter the character: a
SAMPLE O/P:The character 'a' is an alnum character.
*/

#include <stdio.h>

int my_isalnum(int);                                                            // Function Defination
int my_isalnum(int ch)                                                          // Function declaration
{

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))    //check condition
    {
        return 1;                                                               // return 1
    }
    return 0;                                                                   // return 0
}

int main()
{
    char ch;                                                                    //variable declaration
    int ret;                                                                    //variable declaration

    printf("Enter the character:");                                             //User prompt
    scanf("%c", &ch);                                                           // User Input

    ret = my_isalnum(ch);                                                       // Function call
    if (ret == 1)                                                               // check condion ret equals to 1
    {
        printf("Entered character is alphanumeric character");                  // alnum character
    }
    else
    {
        printf("Entered character is not alphanumeric character");              // not alnum character
    }
}
