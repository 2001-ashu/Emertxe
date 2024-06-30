#include <stdio.h>
int main()
{
    char op;
    printf("Enter the character : ");
    scanf(" %c", &op);
    switch (op)
    {
    case 65 ... 90:
        printf("The character is an Upper Case.");
        break;
    case 97 ... 122:
        printf("The character is an Lower Case.");
        break;
    case 48 ... 57:
        printf("The character is an Digit");
        break;
    default:
        printf("The character not an alphabet or digit.");
    }
}