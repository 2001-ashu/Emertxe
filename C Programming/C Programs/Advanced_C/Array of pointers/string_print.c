#include<stdio.h>

int main()
{
     char *str[3]={"Hello","Ashu","Hai"};
     for(int i=0;i<3;i++)
     {
        printf("%s\n",str[i]);
     }
      for(int i=0;str[i];i++)
     {
        for(int j=0;str[i][j];j++)
     {
        printf("%c\n",str[i][j]);
     }
     printf("\n");
     }

}