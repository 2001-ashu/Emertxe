#include <stdio.h>
#include <string.h>
char my_strncmp(char *str1, char *str2, int n)
{
    for (int i = 0; i < n; i++)
    {
        if ((str1[i] - 32) != (str2[i] - 32))
        {
            printf("str1 is not equal to str2");
            return 0;
        }
    }
    int s1 = 0, s2 = 0;
    int flag=0;
    while (str1[s1] != '\0')
    {
        s1++;
    }
    while (str2[s2] != '\0')
    {
        s2++;
    }
   

    for (int i = 0; i < n; i++)
    {

        if (str1[i] == str2[i])
        {
            flag=1;
        }
        else if(s1>s2)
        {
            printf("str2 is less than str1");
        }
        else  if(s1<s2)
        {
            printf("str1 is less than str2");
        }
        
    }
    if(flag==1)
    {
        printf("str1 is equals to str2");
    }
}
int main()
{

    char str1[100], str2[100];
    int n;
    printf("Enter the string1 : ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter the string2 : ");
    scanf("%[^\n]", str2);
    printf("Enter the n : ");
    scanf("%d", &n);
    my_strncmp(str1, str2, n);
}
