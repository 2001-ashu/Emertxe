#include<stdio.h>
int main()
{
     FILE *ptr=fopen("destination.txt","r");
     if(ptr!=NULL)
     {
        puts("File is Exist");
     }
     else{
        puts("File is Not Exist");
     }
     char ch;
     printf("Offset present at %lu\n",ftell(ptr));
     while((ch=fgetc(ptr))!=EOF)
     {
        printf("Offset present at %lu\n",ftell(ptr));
     }
          printf("Offset present at %lu\n",ftell(ptr));

     fclose(ptr);
}