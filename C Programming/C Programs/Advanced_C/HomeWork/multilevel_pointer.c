#include <stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
    int **ptr1 = &ptr;

    int ***ptr2 = &ptr1;

    int ****ptr3 = &ptr2;

    int *****ptr4 = &ptr3;
    printf("%d\n",ptr);
    printf("%d\n",**ptr1);
    printf("%d\n",***ptr2);
    printf("%d\n",****ptr3);
    printf("%d\n",*****ptr4);
}