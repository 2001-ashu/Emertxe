#include <stdio.h>
#include <string.h>
int main()
{
    char struser[] = "User123";
    char strpass[] = "Pass123";
    char str1[100], str2[100];
    printf("Enter User Name: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter Password : ");
    scanf("%[^\n]", str2);
    if (!strcmp(struser, str1) && !strcmp(strpass, str2))
    {
        printf("Login Successfull....");
    }
    else
    {
        printf("Login Failed");
        return 0;
    }
    static int c = 0;
    int ch;
    printf("\nStart Your Exam:\n");
    printf("How many keywords present in c:\n 1.32 2.34 3.40\n");
    printf("Choose Option:");
    scanf("%d", &ch);
    if (ch == 1)
    {
        c++;
    }
    printf(" what is size of integer datatype:\n 1.4 2.8 3.2\n");
    printf("Choose Option:");

    scanf("%d", &ch);
    if (ch == 1)
    {
        c++;
    }
    printf(" what is format specifier of string:\n 1.'%s' 2.'%c' 3.'%d'\n");
    printf("Choose Option:");

    scanf("%d", &ch);
    if (ch == 1)
    {
        c++;
    }
    if (c == 3)
    {

        printf("Congratulation !! Test Passed\nYou Got %d/3", c, c);
    }
}