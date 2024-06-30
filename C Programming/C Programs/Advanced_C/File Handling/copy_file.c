#define _GNU_SOURCE
#include<stdio.h>
int main()
{
     FILE *ptr=fopen("file.txt","r");
     FILE *ptr1=fopen("destination.txt","w");
     if(ptr!=NULL)
     {
        puts("File is Exist");
     }
     else{
        puts("File is Not Exist");
     }
     char ch;
     while((ch=fgetc(ptr))!=EOF)
     {
        fputc(ch,ptr1);
     }
     fcloseall();
}