/*
Name : Ashutosh Uday Zende
Date :27/11/2023
Description:WAP to check whether a number is palindrome or not
sample i/p:Enter number:121
sample o/p:The Entered number is an palindrome.
*/
#include<stdio.h>
int main()
{
    int num,r,rev=0;
   
    printf("Enter the number : ");
    scanf("%d",&num);
     int temp=num;
    while(num != 0)
    {
        r=num%10;
        rev=(rev * 10)+r;
        num=num/10;
    }
    if(temp==rev)
    {
        printf("The Entered number is an palindrome.\n");
    }
    else{
        printf("The Entered number is not an palindrome.\n");
    }
}