#include<stdio.h>
int main()
{
     FILE *ptr=fopen("file.txt","r");
     FILE *ptr1=fopen("copy.txt","r");
     char ch;
     while ((ch=fgetc(ptr))!=EOF)
     {
        fputc(ch,ptr1);
     }
       while ((ch=fgetc(ptr1))!=EOF)
     {
        fputc(ch,stdout);
     }
     
}