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
   int n;
   int sum=0;
   printf("Enter a Number:");
   scanf("%d",&n);
   for(int i=1;i<n-1;i++)
   {
   if((n%i)==0){
       sum=sum+i;
   
      }

   }
   if(sum==n)
   {
   printf("%d It is a Perfect Number.\n",n);
   }
   else
   {
   printf("%d It is not Perfect Number.\n",n);
   }
    return 0;
}

