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
   int i,j,num;						// variable initialise
   int c=1;
   printf("Enter the number: ");					// user prompt
   scanf("%d",&num);					//User input 
   for(i=1;i<=num;i++)					// loop running upto i greater than equals to num
   {
     for(j=1;j<=num;j++)				 	// loop running upto j greater than equals to num
    {
	 
      if(i==1 || j==1 || (i+j)==num+1)				// check condition where i equals to 1 or j equals to 1 or (i+j) equals to (num+1)
      {
	  
        printf("%d ",c);						//then  print c  
	      c=c+1;						// increment c value by 1
      }
      else
      {
      printf("  ");						// print space
      }
     }
     printf("\n");						// go to next line
   }

    return 0;
}
 
     
     
            
            
           
   

