#include <stdio.h>
#include<stdlib.h>
void nrps(char *c, int size, int len)
{
    
    int i, val = 0, count = 0;
    printf("Possible NRPS is ");

    for (i = 0; i < len; i++)
    {
        if (i % size == 0 && i != 0)
        {
            val++;
        }
        printf("%c", *(c + ((i + val) % size)));
    }
}
int main()
{
    int size, len;
    char c[50];
    printf("Enter the number characters C : ");
    scanf("%d", &size);
    printf("Enter the Length of the string N : ");
    scanf("%d", &len);
    printf("Enter 3 distinct characters : ");
    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &c[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {

            if (c[i] == c[j])
            {
                printf("Error : Enter distinct characters");
                exit(0);
            }
        }
    }
    nrps(c, size, len);

    // read the input from the user

    // function call to pass input to the function
}