#include<stdio.h>
#define str(ex) #ex
#define sum(a,b) a##b
int main()
{

printf("%s\n",str(Hello)); //it is not a string it converts into string with help of stringification
sum(do,uble) d;             // It concatenates two word then made double
printf("%zu\n",sizeof(d));     
}