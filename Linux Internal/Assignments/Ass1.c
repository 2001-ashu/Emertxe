#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    if (argc!=3)
    {
        printf("Please  provide 3 arguments\n");
        return 1;
    }

    if(argv[1] != NULL && strcmp(strstr(argv[1], "."), ".txt") != 0)
    {
        printf("Please provide a .txt file as the first argument\n");
        return 1;
    }
    FILE *fp=fopen("argv[1]","r");
    fseek(fp,0,SEEK_END);
    int size = ftell(fp);
    if (size==0)
    {
        printf("The  file is empty\n");
        return 1;
    }
    if(argv[2] != NULL && strcmp(strstr(argv[2], "."), ".txt") != 0)
    {
        argv[2]="output.txt";
    }
    else
    {
        printf("Copy one file to another");    
    }

}