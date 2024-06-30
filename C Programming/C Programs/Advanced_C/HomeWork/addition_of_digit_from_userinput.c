/*
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:

*/

#include<stdio.h>
int main()
{
   int n,sum=0,r;
   printf("Enter a Number:");
   scanf("%d",&n);
   while(n>0)
   {
   r=n%10;
   sum=(sum+r);
   n=n/10;


   }
   printf("%d\n",sum);
    return 0;
}
 
     
     
            
            
           
   

