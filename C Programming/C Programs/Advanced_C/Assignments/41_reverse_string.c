#include <stdio.h>
#include<string.h>
void reverse_iterative(char *);

int main()
{
    char str[30];
    
    printf("Enter any string : ");
    scanf("%[^\n]", str);
    
    reverse_iterative(str);
    
    printf("Reversed string is %s\n", str);
}
void reverse_iterative(char *str)
{
    int a=strlen(str);
  
    for(int i=0;i<a/2;i++)
    {
        int temp=str[i];
        str[i]=str[a-i-1];
        str[a-i-1]=temp;
    }
    
}