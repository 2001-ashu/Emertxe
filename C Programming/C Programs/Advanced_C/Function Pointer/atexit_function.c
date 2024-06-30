#include<stdlib.h>
#include<stdio.h>
static int *ptr;
void my_exit()
{
    printf("Here (atexit) Works at program termination Exiting Program\n");
    if(ptr)
    {
        free(ptr);
    }
}
void test()
{
    printf("Calling Test Function \n");
    exit(0);
}
int main()
{
     atexit(my_exit);
     ptr=malloc(100);
     test();
     printf("Hello");
}