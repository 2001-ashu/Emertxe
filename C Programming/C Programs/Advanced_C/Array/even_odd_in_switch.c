#include<stdio.h>
int main()
{
    int num;
    printf("Enter A Number:");
    scanf("%d",&num);
    switch(num%2)
    {
    case 0:
        printf("%d Yes,it is Even Number..\n",num);
        break;
     case 1:
        printf("%d It is a Odd Number..",num);
        break;
    default:
    printf("Invalid Input..");
   }
}