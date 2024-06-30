#include <stdio.h>
#include <string.h>


char *my_strtok(char str[], const char delim[]);                                //declare function

int main()
{
    char str[100], delim[100];

 //   printf("Enter the string  : ");
    scanf("%s", str);

   

 //   printf("Enter the delimeter : ");
    scanf("\n%s", delim);
   

    char *token = my_strtok(str, delim);                                        //call function
    printf("Tokens :\n");

    while (token)                                                               //loop
    {
        printf("%s\n", token);
        token = my_strtok(NULL, delim);                                         //call function
    }
    return 0;
}
char *my_strtok(char str[], const char delim[])                                 // function declaration
{

    static char *ptr;
    static int st, cu;
    if (str != NULL)
    {
        ptr = str;
        st = 0;
        cu = 0;
    }
    st = cu;
    for (int i = st; ptr[i] != '\0'; i++, cu++)
    {
        

        for (int j = 0; delim[j] != '\0'; j++)
        {
            if (ptr[i] == delim[j])
            {
                ptr[i] = '\0';
                cu++;
                if(ptr[st] != '\0')
                return (ptr + st);
                else
                {
                  return my_strtok(NULL,delim);
                }
            }
        }
        
    }
    if (ptr[st] != '\0')
    {
        return ptr + st;
    }
    else
    {
        return NULL;
    }
}