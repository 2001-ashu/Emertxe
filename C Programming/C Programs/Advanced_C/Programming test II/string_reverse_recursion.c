#include <stdio.h>
char rev(char *str, int size, int i)
{
    if (size / 2 > i)
    {
        int temp = str[i];
        str[i] = str[size - i - 1];
        str[size - i - 1] = temp;
        rev(str, size, ++i);
    }
}
int main()
{
    char str[100];
    int size=0;
    printf("Enter String:");
    scanf("%[^\n]", str);
    while (str[size++] != '\0');
        

    rev(str, size, 0);
    for (int i = 0; i < size; i++)
    {
        printf("%c",str[i]);
    }
    
}