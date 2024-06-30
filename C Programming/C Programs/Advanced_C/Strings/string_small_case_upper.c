#include<stdio.h>
int main()
{
    char str1[100]="hello";
    char str2[100]="hello";
    int flag=0;

      for (int i = 0; i < str1[i]; i++)
    {
        if (str1[i]  != str2[i] )
        {
            
           printf("str1 is not equal to str2");
            return 0;
        }
        else
        {
           flag=0;
        }
    }
    if(flag==0)
     printf("is equal  ");
}   