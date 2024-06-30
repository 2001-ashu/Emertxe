/*
Name: Ashutosh Uday Zende
Date: 27/11/2023
Description: WAP to print line pattern
sample i/p:Enter n : 9
           Enter m : 3
sample o/p:$$$***$$$
*/
#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=n;i++)
    {
        if(i<=m || i>m+m && i<=n)
        {
            printf("$");
        }
        else{
            printf("*");
        }
    }
     
}