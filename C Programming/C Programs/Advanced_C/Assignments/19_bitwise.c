/*
Name:Prathmesh Patil
Date:18/12/2023
Title:WAP to print 'n' bits from LSB of a number
Sample input:Enter the number: 10
             Enter number of bits: 12
Sample output:Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/
#include <stdio.h>

int print_bits(int, int);                                                       //Function Declaration

int main()
{
    int num, n;
    
    printf("Enter num, n :\n");
    scanf("%d%d", &num, &n);
    
    printf("Binary form of %d: ", num);
    print_bits(num, n);                                                         //Function callinf
    return 0;
}
int print_bits(int num,int n)
{
     int i;
     for(i = n - 1 ; i >= 0 ; i--)                                              //Loop run n times
     {
         printf("%d ",((num >> i) & 1));                                        //Output 
     }
 }