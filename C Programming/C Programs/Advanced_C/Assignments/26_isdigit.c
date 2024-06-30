#include <stdio.h>

int is_xdigit(int);
int is_xdigit(int c)
{
    if ((c >= 48) && (c <= 57) || (c >= 65) && (c <= 70) || (c >= 97) && (c <= 102))
    {
        return 1;
    }
    return 0;
}

int main()
{
    char ch;
    short ret;

    printf("Enter a character: ");
    scanf("%c", &ch);

    ret = is_xdigit(ch);

    if (ret == 1)
    {
        printf("Entered character is an hexadecimal digit");
    }
    else
    {
        printf("Entered character is not an hexadecimal digit");
    }
    return 0;
}
