#include <stdio.h>
char rev(char *str)
{
    if(*str)
    {
        rev(str+1);
    }
    printf("%c",*str);
}
int main()
{
    rev("Hello");
}