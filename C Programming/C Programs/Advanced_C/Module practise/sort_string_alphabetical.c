#include <stdio.h>
#include <string.h>

void sort(char *str)
{
    int len = strlen(str);
    int temp;

    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

       sort(str);

    printf("Sorted string: %s\n", str);

    return 0;
}
