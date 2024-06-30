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
  int power,mul=1;
  printf("Enter the number:");
  scanf("%d",&power);
  if(power>0){
  for(int i=1;i<=power;i++)
  {
  printf("%d ",mul);
  mul=mul*2;

  }
  printf("\n");
  }
  else
  {
  printf("Error : Number should be an positive number.\n");
  }
    return 0;
}
 
     
     
            
            
           
   

