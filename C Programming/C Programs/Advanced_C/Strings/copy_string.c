/*
Name:Ashutosh Uday Zende
Date:3/01/2024
Description:WAP to copy a string
Sample i/p :Enter the string : Hello World
Sample o/p: Copied string is Hello World
*/
#include<stdio.h>
//#include<string.h>

int main()
{
    char str[50],str1[50];                                                      // string declare
    printf("Enter the string : ");                                              //user prompt
    scanf("%[^\n]",str);                                                        //input string
    int a=sizeof(str);                                                          //length of string
    for(int i=0;i<a;i++)                                                        //loop run until i less than a
    {
        str1[i]=str[i];                                                         //str store in str1 by character
    }
    printf("Copied string is %s",str1);                                         //print str2
    
}