#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character:");
    scanf(" %c", &ch);
    char arr[8];
    for (int i = 0; i < 8; i++)
    {
        arr[i] = 0xff;
    }
    for (int i = 0; i < 8; i++)
    {
        if (ch & (1 << i))
        {
            arr[i] = arr[i] | 1;
        }
        else
        {
            arr[i] = arr[i] & (~(1));
        }
    }
    printf("After Encode:\n");

    for (int i = 0; i < 8; i++)
    {
        printf("%hhx \n", arr[i]);
    }
}