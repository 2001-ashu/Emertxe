/*
Name:Ashutosh Uday Zende
Date:09/02/24
Description:A55 - WAP to define a macro SIZEOF(x), without using sizeof operator
*/
#include <stdio.h>
#define SIZEOF(x) ((char *)(&x + 1)) - ((char *)&x)
int main()
{
    int i;
    char ch;
    float f;
    double d;
    unsigned int uni;
    long int li;
    printf("Size of int : %ld bytes\n", SIZEOF(i));
    printf("Size of char : %ld bytes\n", SIZEOF(ch));

    printf("Size of float : %ld bytes\n", SIZEOF(f));

    printf("Size of double : %ld bytes\n", SIZEOF(d));

    printf("Size of unsigned int : %ld bytes\n", SIZEOF(uni));
    printf("Size of long int : %ld bytes\n", SIZEOF(li));
}