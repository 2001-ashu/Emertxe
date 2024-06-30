/*
Name:Ashutosh Uday Zende
Date:24/01/24
Description:A40 - WAP to implement itoa function
*/
#include <stdio.h>

char itoa(int num, char *str); // function defination

int main()
{
    int num;
    char str[100];

    printf("Enter the number:");
    scanf("%d", &num);

    itoa(num, str); // function call

    printf("Integer to string is %s", str);
}
char itoa(int num, char *str) // function declaration
{
    int i = 0;
    int r = 0;

    if (num < 0)
    {
        str[i++] = '-';
        num = -num;
    }
    else if (num == 0)
    {
        str[i++] = '0';
        num = 0;
    }

    while (num != 0)
    {
        r = num % 10 + r * 10;
        num = num / 10;
    }
    while (r != 0)
    {
        str[i++] = r % 10 + '0';
        r = r / 10;
    }
    str[i] = '\0';
}