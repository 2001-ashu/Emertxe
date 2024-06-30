#include <stdio.h>
#include<string.h>

void replace_blank(char *);

int main()
{
    char str[100];
    
    printf("Enter the string with more spaces in between two words\n");
    scanf("%[^\n]", str);

    
    replace_blank(str);
    
    printf("%s\n", str);
}
void replace_blank(char *str)
{
    int a=strlen(str);
   for(int i=0;i<a;i++)
{
    if(str[i]==' ' && str[i+1]==' ')
    {
        for ( int j = i; str[j]; j++)
        {
            str[j]=str[j+1];
            i--;
        }
        
    }
}
}
