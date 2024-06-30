#include <stdio.h>
#include <stdlib.h>
int my_strcmp(char *str1, char *str2)
{
    int i = 0;
    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
        {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
void swap(char *str1, char *str2)
{
    int i = 0;
    //  int s=strlen(str1)>strlen(str2)?strlen(str1):strlen(str2);
    // int s=20;
    while (i < 20)
    {
        str1[i] = str1[i] ^ str2[i];
        str2[i] = str1[i] ^ str2[i];
        str1[i] = str1[i] ^ str2[i];
        i++;
    }
}

void sort_names(char (*name)[20], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i - 1; j++)
        {
            if (my_strcmp(name[j], name[j + 1]) > 0)
            {
                swap(name[j], name[j + 1]);
            }
        }
    }
}

int main()
{
    int row;
    printf("Enter the size: ");
    scanf("%d", &row);

    char(*name)[20];
    name = malloc(row * sizeof(char[20]));
    printf("Enter the %d names of length max 20 characters in each\n", row);
    for (int i = 0; i < row; i++)
    {

        printf("[%d] -> ", i);
        scanf("%s", name[i]);
    }
    sort_names(name, row);
    printf("The sorted names are:\n");
    for (int i = 0; i < row; i++)
    {
        printf("%s\n", name[i]);
    }
}