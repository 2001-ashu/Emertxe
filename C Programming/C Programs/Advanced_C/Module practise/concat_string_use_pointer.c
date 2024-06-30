#include <stdio.h>
#include <string.h>

char *strncat( char *dest, const char *src, size_t n)
{
    char *ptr = dest + strlen(dest); // Move pointer to the end of destination string
    while (*src != '\0' && n--)
    { // Copy characters from src to dest
        *ptr++ = *src++;
    }

    *ptr = '\0'; // Null-terminate the concatenated string

    return dest;
}

int main()
{
     char dest[20] = "Hello, ";
    const char *src = "world!!";
    size_t n = strlen(src); // Number of characters to concatenate

    printf("Before concatenation: %s\n", dest);

    strncat(dest, src, n);

    printf("After concatenation: %s\n", dest);

    return 0;
}
