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
  int a,b;
 char ch;
printf("Enter First Number:\n");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
printf("Enter Your Character For Operation:\n");
scanf(" %c",&ch);
int sum=a+b;
int sub=a-b;
int mul=a*b;
float div=a/b;
if(ch=='+')
{
printf("Addition Of two Number %d:\n",sum);
}
else if (ch=='-')
{
printf("Substraction of Two Number:%d\n",sub);
}
else if(ch=='*')
{
printf("Multiplication Of two Number:%d\n",mul);
}
else if(ch=='/')
{
printf("Division of Two Number:%f\n",div);
}
else
{
printf("Invalid Input..\n");
}
return 0;
}
 
     
     
            
            
           
   

