#include<stdio.h>
int main()
{
     char str[15];
     scanf("%10[^\n]",str); // 10 is a fixed sized of a character
                            // [^\n]means when press enter that time program is terminated
     puts(str);   
                      //print the string
    puts("Enter the string ");
    gets(str);              //gets function shows segmentation fault after print the output 
                            //he give illegal memory access
    puts(str);
}


