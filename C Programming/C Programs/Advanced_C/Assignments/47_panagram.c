/*
Name:Ashutosh Uday Zende
Date:22/01/2024
Description:A47 - WAP to check given string is Pangram or not
*/

#include <stdio.h>

int pangram(char[]); // function declare

int main()
{
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]", str);
    if (pangram(str)) //  function Call
        printf("The Entered String is a Pangram String");
    else
        printf("The Entered String is not a Pangram String");
    return 0;
}
int pangram(char str[])                         // function defination
{
    int arr[26] = {0};
    for (int i = 0; str[i]; i++)               // check condition
    {
        if (str[i] >= 'a' && str[i] <= 'z') 
        {
            arr[str[i] - 'a'] = 1;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            arr[str[i] - 'A'] = 1;
        }
    }
    for (int i = 0; i < 26; i++)
    
    {
        if (arr[i] == 0)
            return 0;
    }
    return 1;
}