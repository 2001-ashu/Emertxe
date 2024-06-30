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
  int n,r,sum=0;
  
  printf("Enter A Number:");
  scanf("%d",&n);
  int temp=n;
  while(n>0)
  {
  r=n%10;
  sum=(sum *10)+r;
  n=n/10;
  }
  if(temp==sum)
  {
  printf("%d It is a Palindrome Number..\n",temp);
  }
  else
  {
  printf("%d It is not a Palindrome Number..\n",temp);
  }
    return 0;
}
 
     
     
            
            
           
   

