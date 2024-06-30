#include<stdio.h>
int main()
{
    FILE *ptr=fopen("file.txt","r");
    if(ptr==NULL)
    {
       fprintf(stderr,"Can't open input file.txt\n");
        return 1;
    }
    char ch;
    while ((ch=fgetc(ptr))!=EOF)
    {
        fputc(ch,stdout);
    }
    

}