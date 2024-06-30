#include<stdio.h>
int main()
{
    int val;
    printf("Enter hexa value: ");
    scanf("%X",&val);
    int r1=(val & 0xf);
    int r2=(r1<<4);
    int r3=(val & 0xf0);
    int r4=(r3>>4);
    int swap=r2 | r4;
    printf("%X",swap);
}