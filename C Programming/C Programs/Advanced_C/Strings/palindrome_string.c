// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
char ch[20]="amma";
int a=0;
int z=strlen(ch)-1;
while(z>a)
{
    if(ch[a++] != ch[z--])
    {
        printf("Not ");
        return 0;
    }
}
printf("palindrome");
    return 0;
}