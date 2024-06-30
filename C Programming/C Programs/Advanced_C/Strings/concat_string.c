#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i;
    printf("Enter string:");
    scanf("%[^\n]",s1);
    getchar();
    printf("Enter string:");
    scanf("%[^\n]",s2);
    for(i=0;s1[i];i++);
    int j=0;
    while(s2[j])
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("%s",s1);
}
