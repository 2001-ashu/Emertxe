#include<stdio.h>
int main()
{
    int x=0x12345678;
    char *p=&x;
    if(*p==0x78)
    {
        printf("It is little Endian system.");
      //  printf("%d",p);
    }
    else
    {
        printf("It is Big Endian system.");
    }
    
}


