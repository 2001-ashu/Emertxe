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
   int n1,n2;
   int prod=0;
   printf("Enter Two Numbers:");
   scanf("%d%d",&n1,&n2);
   if (n1>0 && n2>0){
   for(int i=1;i<=n2;i++)
   {
   prod=prod+n1;
   }
   printf("The Result is %d\n",prod);
   }
   else if (n1<0 && n2<0)
   {
   for(int i=1;i<=n2;i++)
   {
   prod=prod+n1;
   }
   printf("The Result is %d\n",prod);
   }
   else
   {
   printf("Wrong Input..");
   }

    return 0;
}
 
     
     
            
            
           
   

