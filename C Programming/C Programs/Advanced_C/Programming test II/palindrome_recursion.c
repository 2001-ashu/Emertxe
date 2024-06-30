#include<stdio.h>
int palindrome(int num)
{
     int r;
     static int rev=0;
    if(num!=0)
    {
   
    r=num%10;
    rev=(rev*10)+r;
    palindrome(num/10);
    
    }
    return rev;

}
int main()
{
     int num;
     printf("Enter the no.");
     scanf("%d",&num);
     int temp=num;
     int ret=palindrome(num);
     printf("%d\n",ret);
     if(ret==temp)
     {
        printf("It is Palindrome Number.");

     }
     else{
        printf("It is not Palindrome");
     }

}