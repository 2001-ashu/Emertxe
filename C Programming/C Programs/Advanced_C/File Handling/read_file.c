#include<stdio.h>
int main()
{
     FILE *ptr=fopen("file.txt","r");
     if (ptr!=NULL)
     {
        puts("File Is Exist ");
     }
     else
     {
        puts("File Is not Exist");
     }
     char ch;
     while((ch=fgetc(ptr))!=EOF)
     {
        fputc(ch,stdout);
     }
     

}