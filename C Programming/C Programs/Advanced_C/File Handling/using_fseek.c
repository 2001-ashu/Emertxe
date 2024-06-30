#define _GNU_SOURCE
#include <stdio.h>
int main()
{
    FILE *ptr = fopen("file.txt", "r");
    fseek(ptr, 10, SEEK_SET);
    printf("Offset position----->%ld\n", ftell(ptr));
    fseek(ptr, 5, SEEK_CUR);
    printf("Offset position----->%ld\n", ftell(ptr));
    char ch;
    while ((ch = fgetc(ptr)) != EOF)
    {
        fputc(ch, stdout);
    }
    fseek(ptr, 0, SEEK_END);
    printf("Offset position----->%ld\n", ftell(ptr));
}