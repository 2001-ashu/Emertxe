#include <stdio.h>


void squeeze(char str1[], char str2[])
{
    int l=0;
    while (str2[l]!='\0')

    {
        l++;
    }
    int size=l+1;
    for(int i=0;str2[i];i++)
    {
        for(int j=0;str1[j];j++)
        {
            if(str1[j]==str2[i])
            {
                for (int k = j; str1[k]; k++)
                {
                   str1[k]=str1[k+1]; 
                }
                
                
            }
        }

    }
    
}

int main()
{
    char str1[30], str2[30];
    
    printf("Enter string1:");
    scanf("%[^\n]", str1);
    getchar();
    

    printf("Enter string2:");
    scanf("%[^\n]", str2);
    
    squeeze(str1, str2);
    
    printf("After squeeze s1 : %s\n", str1);
    
}