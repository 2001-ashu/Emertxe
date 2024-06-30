#include <stdio.h>
#include <string.h>

int getword(char *);

int main()
{
    int len = 0;
    char str[100];

    printf("Enter the string : ");
    scanf(" %[^\n]", str);

    len = getword(str);

    printf("You entered %s and the length is %d\n", str, len);
}
int getword(char *str)
{
    int i = 0;
    int a = strlen(str);

    for ( i = 0; i < a; i++)
    {

        
        if (str[i] == ' ')
        {
            str[i] = '\0';
            return i;
        }
    }
    return i;
}
