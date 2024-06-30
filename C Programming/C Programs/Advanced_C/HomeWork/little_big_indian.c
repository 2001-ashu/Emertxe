#include<stdio.h>
int main()
{
     int i=0x12345678;
     char *ptr=(char *)&i;
     printf("%x",*ptr);
     if(*ptr==0x78)
     {
        printf("It is big Endian.");
     }
     else{
        printf("It is little Endian");
     }
}