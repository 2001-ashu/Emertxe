/*
Name:Ashutosh Uday Zende
Date:27/11/2023
Description:WAP to multiply 2 nos without multiplication operator
sample i/p: Enter the two numbers : 10 2
sample o/p: The Result is 20
*/
#include<stdio.h>
int main()
{
    int n1,n2;                              // variable initialise
    int prod=0;
    printf("Enter the two numbers : ");     //User Prompt
    scanf("%d %d",&n1,&n2);                 //User Input
    for(int i=1;i<=n2;i++)                  //loop with condition i is less than equals to n2
    {
        prod=prod+n1;                       //calculate prod value
    }
    printf("The Result is %d\n",prod);      //print result
    return 0;
    
}