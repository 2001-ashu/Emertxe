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
    char s=65;
    char l=98;

   for(int i=1;i<=5;i++)
   {
   for(int j=1;j<=5;j++)
   {
       if((i+j)%2 ==0)
       { 
	   
         printf("%c ",s);
	 s=s+2;
       }
       else
       {
	   printf("%c ",l);
	   l=l+2;
       }
   }
   printf("\n");

   }
    return 0;
}
 
     
     
            
            
           
   

