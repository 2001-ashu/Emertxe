#include <stdio.h>

int main() {
char str[100];
printf("Enter string:");
scanf("%[^\n]",str);
puts(str);
int i;
while(str[i++]!='\0');

printf("Length of String: %d",i-1);
    return 0;
}
// Its not working in VS Code....