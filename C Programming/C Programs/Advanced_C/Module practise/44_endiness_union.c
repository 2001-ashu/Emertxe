#include <stdio.h>
union endian
{
    unsigned int value;
    unsigned char val[4];
};
int main()
{
    union endian e;
    e.value = 0x12345678;
    if (e.val[0] == 0x78)
    {
        printf("Little endian\n");
    }
    else
    {
        printf("big endian");
    }
}