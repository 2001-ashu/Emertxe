#include<stdio.h>
#define swap(a,b) \
{\
a=a^b;\
b=a^b;\
a=a^b;\
}
int main()
{
  int a=3,b=5;
  printf("Before Swap a=%d b=%d\n",a,b);
  swap(a,b);
    printf("After Swap a=%d b=%d\n",a,b);
      
}