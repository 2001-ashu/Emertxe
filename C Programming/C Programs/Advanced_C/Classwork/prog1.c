#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the num1 : ");
    scanf("%d",&a);
    printf("Enter the num2 : ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("Max of two numbers is %d",a);
    }
    else{
        printf("Max of two numbers is %d",b);
    }
    return 0;
}