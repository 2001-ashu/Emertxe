#include<stdio.h>
int armstrong(int num)
{
    int rem=0,r;
    while (num > 0) {
        r = num % 10;
        rem += r * r * r;
        num /= 10;
    }
    return rem;

}
int main()
{
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("Fuction return Value:%d\n",armstrong(num));
    if(num==armstrong(num))
    {
        printf("It is armstrong Number\n");
    }
    else{
        printf("It is not an Armstrong number \n");
    }
}