#include<stdio.h>
#define _GNU_SOURCE
int main()
{
    int n1,n2;
    float n3;
    char str[10],oper,ch;
     FILE *ptr=fopen("file.txt","w+");
    if(ptr==NULL)
    {
        fprintf(stderr,"Can't open input file.txt\n");
        return 1;
    }
    fprintf(ptr,"%d %c %d %s %f\n",2,'+',1,"IS",3.0);
    rewind(ptr);
    fscanf(ptr,"%d %c %d %s %f",&n1,&oper,&n2,str,&n3);
    printf("%d %c %d %s %f\n",n1,oper,n2,str,n3);
    fclose(ptr);
}