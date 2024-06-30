#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter Two No. ");
    scanf("%d %d",&a,&b);
    while (b!=0)
    {
    int carry=a&b;
    a=a^b;
    b=carry<<1;
}
printf("Sum of two digit:%d",a);
}