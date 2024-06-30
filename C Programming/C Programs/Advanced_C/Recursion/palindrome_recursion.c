#include <stdio.h>
int palindrome(int num)
{
    int r, n, temp = num;
    static int rev = 0;
    if (num)
    {
        r = num % 10;
        rev = (rev * 10) + r;
        palindrome(num / 10);
        return rev;
    }
}
int main()
{
    int num;
    printf("Enter No:");
    scanf("%d", &num);
    int temp = num;

    int rev = palindrome(num);
    printf("Reverse of %d is %d\n",temp,rev);
    if (rev == temp)

    {
        printf(" %d It is a palindrome Number", temp);
    }
    else
    {
        printf("%d It is not palindrome Number", temp);
    }
}