#include <stdio.h>
void swap(void *p, void *q, int size)
{
    char temp;
    for (int i = 0; i < size; i++)
    {
        temp = *(char *)(p + i);
        *(char *)(p + i) = *(char *)(q + i);
        *(char *)(q + i) = temp;
    }
}

int main()
{
    // This for swapping char value.===>
    char a = 'A';
    char b = 'Z';
    int s1 = sizeof(char);
    swap(&a, &b, s1);
    printf("After swapping %c and %c\n", a, b);
   
   // This for swapping integer value.===>
    int n1 = 10;
    int n2 = 20;
    int s2 = sizeof(int);

    swap(&n1,&n2,s2);
    printf("After swapping %d and %d",n1,n2);
}