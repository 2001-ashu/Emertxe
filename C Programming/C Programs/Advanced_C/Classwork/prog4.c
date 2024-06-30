#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character : ");
    scanf(" %c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("The character is Upper Case.\n");
    }

    else if (ch >= 97 && ch <= 122)
    {
        printf("The character is Lower Case.\n");
    }

    else if (ch >= 48 && ch <= 57)
    {
        printf("The character is Digit.\n");
    }

    else
    {
        printf("The character not an alphabet or digit");
    }
}