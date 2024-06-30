#include <stdio.h>
#include<string.h>


int main() {
char str[100];
printf("Enter string:");
scanf("%[^\n]",str);

int i;
int a=strlen(str);

printf("Length of String: %d\n",a);
  int temp;
     for (int i = 0; i < a/2; i++)
     {
        temp=str[i];
        str[i]=str[a-i-1];
        str[a-i-1]=temp;
     }
     puts(str);
    return 0;
}