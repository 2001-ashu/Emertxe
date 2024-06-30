/*
Name:Ashutosh Uday Zende
Date:08/01/2024
Descrition:WAP to compare string2 with string1 up to n characters
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int n;
    printf("Enter the string1 : ");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter the string2 : ");
    scanf("%[^\n]",str2);
    printf("Enter the n : ");
    scanf("%d",&n);
    int res=strncmp(str1,str2,n);
    if( res==0 )
    {
        printf("str1 is equal to str2.");
    }
     if( res < 0 )
    {
        printf("str1 is less than str2.");
    }
     if( res > 0 )
    {
        printf("str2 is less than str1.");
    }

}