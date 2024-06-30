
#include <stdio.h>

int my_strlen(char str[]);
void combination(char str[], int start, int end);

int main()
{
        char str[100];
        int i,j,n;
        printf("Enter a string: ");
        scanf("%100[^\n]", str);
        for(i = 0; str[i] ; i++)
        {
                for(j = i+1; str[j] ; j++)
                {
                        if(str[i] == str[j])
                        {
                                printf("please enter distinct characters.");               // Error
                                return 0;
                        }
                }
        }
        n = my_strlen(str);                                                  // finction call for length
        combination(str, 0, n - 1);                                         // function calling
        return 0;
}

int my_strlen(char str[])
{
        int len = 0;
        while(str[len] != '\0')
        {
                len++;
        }
        return len;
}

void combination(char str[], int start, int end)
{
        static int x = 0;
        if(x == 0)
        {
                printf("All possible combinations of given string :");
                x++;
        }
        if (start > end)
        {
                printf("%s\n", str);
                return;
        }

        for (int i = start; i <= end; i++)
        {
                // Swap str[start] and str[i]
                char temp = str[start];
                str[start] = str[i];
                str[i] = temp;

                combination(str, start + 1, end);

                // Swap back to restore the original string
                temp = str[start];
                str[start] = str[i];
                str[i] = temp;
        }
}