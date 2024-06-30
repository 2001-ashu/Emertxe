#include <stdio.h>
#include <string.h>
int main()
{
    char str[5];
    printf("Enter Hexa Value:");
    scanf("%s", str);
    int sum = 0, mul = 1, ans, add, flag = 0;
    int size = strlen(str);
    size = size - 1;
    for (int i = size; i >= 0 && str[i] != 'x'; i--)
    {
        if (str[i] == 0)
            add = 0;
        else if (str[i] == 1)
            add = 1;
        else if (str[i] == 2)
            add = 2;
        else if (str[i] == 3)
            add = 3;
        else if (str[i] == 4)
            add = 4;
        else if (str[i] == 5)
            add = 5;
        else if (str[i] == 6)
            add = 6;
        else if (str[i] == 7)
            add = 7;
        else if (str[i] == 8)
            add = 8;
        else if (str[i] == 9)
            add = 9;
        else if (str[i] == 'a' || str[i] == 'A')
            add = 10;
        else if (str[i] == 'b' || str[i] == 'B')
            add = 11;
        else if (str[i] == 'c' || str[i] == 'C')
            add = 12;
        else if (str[i] == 'd' || str[i] == 'D')
            add = 13;
        else if (str[i] == 'e' || str[i] == 'E')
            add = 14;
        else if (str[i] == 'f' || str[i] == 'F')
            add = 15;
        else
        {
            flag = 1;
            printf("Invalid");
            break;
        }

        ans=add*mul;
        sum=sum+ans;
        mul=mul*16;


    }
    if(flag==0)
    {
        printf("Binary no of %s ",str);
        for(int i=31;i>=0;i--)
        {
            printf("%d ",1&(sum>>i));
        }
    }
}